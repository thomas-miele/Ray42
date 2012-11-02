//
// main.cpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Fri Sep 21 20:46:59 2012 thomas miele
// Last update Fri Nov  2 18:07:43 2012 thomas miele
//

#include <QApplication>
#include "RayEngine.hpp"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  // init
  RayStream stream(720, 640);
  stream.setImage();

  // Create objects for scene
  RCamera camera(QVector3D(-300, 50, 0), QVector3D(0, 0, 0));

  RSphere sphere(QVector3D(0, 150, 0), 100);
  sphere.setColor(0xffff0000);

  RPlane plane(QVector3D(0, 0, 0), QVector3D(0, 1, 1), 0);
  plane.setColor(0xff0000ff);

  // fill scene with objects
  std::vector<RObject*> scene(2);
  scene[0] = &sphere;
  scene[1] = &plane;

  // rendering
  RayEngine::raytracer(stream, camera, scene);
  scene.clear();

  // Display Image
  stream.setPixmap();
  stream.setLabel();
  stream.display();
  return app.exec();
}
