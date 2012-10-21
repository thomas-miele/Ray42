//
// RCamera.hpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 19:18:43 2012 thomas miele
// Last update Sat Oct  6 19:51:31 2012 thomas miele
//

#ifndef R_CAMERA_HEADER
#define R_CAMERA_HEADER

#include <QVector3D>

class RCamera
{
public:
  RCamera(QVector3D position, QVector3D look_at);

  qreal distance() const;
  QVector3D position() const;
  QVector3D look_at() const;

private:
  qreal m_distance;
  QVector3D m_position;
  QVector3D m_look_at;
  QVector3D m_ray;
};

#endif  // !R_CAMERA_HEADER
