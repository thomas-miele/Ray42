//
// RayEngine.cpp for Ray42 in /home/miele_t//GitHub/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Fri Nov  2 18:00:21 2012 thomas miele
// Last update Fri Nov  2 18:07:08 2012 thomas miele
//

#include "header/RayEngine.hpp"

uint RayEngine::calc(Ray& ray, std::vector<RObject*>& scene)
{
  qreal k(DBL_MAX);
  uint color(0xff000000);
  bool query(false);

  for (uint index(0); index != scene.size(); index++)
    {
      query = scene[index]->intersection(ray);
      if (query)
        {
          if (ray.k() < k)
            {
              k = ray.k();
              color = ray.color();
              ray.setIndex(index);
            }
        }
    }
  ray.setK(k);
  ray.pointIntersection();
  return color;
}

uint RayEngine::init_calc(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene, int x, int y)
{
  uint color(0xff000000);
  qreal x1(0), y1(0), z1(0);

  x1 = camera.distance();
  y1 = stream.width() / 2 - x;
  z1 = stream.height() / 2 - y;
  QVector3D pixel(x1, y1, z1);
  QVector3D dir = pixel - camera.position();
  Ray ray(camera.position(), dir);

  color = RayEngine::calc(ray, scene);
  return color;
}

void RayEngine::raytracer(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene)
{
  int x(0), y(0);
  int win_x = stream.width();
  int win_y = stream.height();
  uint color = 0xff000000;

  while (y < win_y)
    {
      while (x < win_x)
        {
          color = RayEngine::init_calc(stream, camera, scene, x, y);
          stream.setPixelColor(x, y, color);
          x++;
        }
      x = 0;
      y++;
    }
}
