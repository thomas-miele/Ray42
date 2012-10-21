//
// main.cpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Fri Sep 21 20:46:59 2012 thomas miele
// Last update Sun Oct 21 22:12:59 2012 thomas miele
//

#include <vector>
#include <cfloat>
#include <QApplication>
#include "header/RayStream.hpp"
#include "header/Ray.hpp"
#include "header/RCamera.hpp"
#include "header/RObject.hpp"
#include "header/RSphere.hpp"
#include "header/RCylinder.hpp"
#include "header/RPlane.hpp"

uint calc(Ray& ray, std::vector<RObject*>& scene)
{
  uint index(0);
  qreal k(DBL_MAX);
  uint color(0xff000000);
  bool query(false);
  
  while (index != scene.size())
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
      index++;
    }
  return color;
}

uint init_calc(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene, int x, int y)
{
  uint color(0xff000000);
  qreal x1(0), y1(0), z1(0);
  
  x1 = camera.distance();
  y1 = stream.width() / 2 - x;
  z1 = stream.height() / 2 - y;
  QVector3D pixel(x1, y1, z1);
  QVector3D dir = pixel - camera.position();
  Ray ray(camera.position(), dir);
  
  color = calc(ray, scene);
  return color;
}

void raytracer(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene)
{
  int x(0), y(0);
  int win_x = stream.width();
  int win_y = stream.height();
  uint color = 0xff000000;

  while (y < win_y)
    {
      while (x < win_x)
	{
	  color = init_calc(stream, camera, scene, x, y);
	  stream.setPixelColor(x, y, color);
	  x++;
	}
      x = 0;
      y++;
    }
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  // init
  RCamera camera(QVector3D(-300, 50, 0), QVector3D(0, 0, 0));
  RayStream stream(720, 640);
  stream.setImage();
  // init scene
  RSphere sphere(QVector3D(0, 150, 0), 75);
  sphere.setColor(0xffff0000);
  RPlane plane(QVector3D(0, 0, 0), QVector3D(0, 1, 1), 0);
  plane.setColor(0xff0000ff);
  // create scene
  std::vector<RObject*> scene(2);
  scene[0] = &sphere;
  scene[1] = &plane;
  // rendu
  raytracer(stream, camera, scene);
  scene.clear();
  // affichage
  stream.setPixmap();
  stream.setLabel();
  stream.display();
  return app.exec();
}
