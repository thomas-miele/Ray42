//
// Ray.cpp for Ray42 in /home/miele_t//Desktop/Ray42
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Sat Oct  6 17:50:20 2012 thomas miele
// Last update Tue Oct 23 20:08:47 2012 thomas miele
//

#include "Ray.hpp"

Ray::Ray(QVector3D pos, QVector3D dir) : m_position(pos), m_direction(dir), m_k(0), m_color(0xff000000), m_index(0), m_point(0, 0, 0)
{
  m_direction.normalize();
}

// GET
QVector3D Ray::position() const {return m_position;}
QVector3D Ray::direction() const {return m_direction;}
qreal Ray::k() const {return m_k;}
uint Ray::color() const {return m_color;}
uint Ray::index() const {return m_index;}
QVector3D Ray::point() const {return m_point;}

// SET
void Ray::setPosition(QVector3D pos)
{
  m_position = pos;
}

void Ray::setDirection(QVector3D dir)
{
  dir.normalize();
  m_direction = dir;
}

void Ray::setK(qreal k)
{
  m_k = k;
}

void Ray::setColor(uint color)
{
  m_color = color;
}

void Ray::setIndex(uint index)
{
  m_index = index;
}

void Ray::setPoint(QVector3D point)
{
  m_point = point;
}

// FOO
void Ray::pointIntersection()
{
  qreal x(0), y(0), z(0);

  x = m_k * m_direction.x() + m_position.x();
  y = m_k * m_direction.y() + m_position.y();
  z = m_k * m_direction.z() + m_position.z();

  m_point.setX(x);
  m_point.setY(y);
  m_point.setZ(z);
}
