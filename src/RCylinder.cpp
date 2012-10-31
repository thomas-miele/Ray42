//
// RCylinder.cpp for Ray42 in /home/miele_t//Desktop/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Thu Oct 11 23:14:53 2012 thomas miele
// Last update Wed Oct 31 13:54:41 2012 thomas miele
//

#include "header/RCylinder.hpp"

using namespace std;

// ### CONSTRUCTOR ###
RCylinder::RCylinder(qreal radius) : RObject(), m_radius(radius)
{
  m_transform.chmod(true, true, true);
}

RCylinder::RCylinder(QVector3D position, qreal radius) : RObject(position), m_radius(radius)
{
  m_transform.chmod(true, true, true);
}

RCylinder::RCylinder(qreal x, qreal y, qreal z, qreal radius) : RObject(x, y, z), m_radius(radius)
{
  m_transform.chmod(true, true, true);
}

RCylinder::~RCylinder() {}

// === END ===

// ### GET METHODS ###
qreal RCylinder::radius() const {return m_radius;}
// === END ===

// ### SET METHODS ###
void RCylinder::setRadius(qreal radius) {m_radius = radius;}
// === END ===

// ### FOO ###
bool RCylinder::intersection(Ray& ray)
{
  Ray ray_tmp(ray);
  if (m_transform.canTranslate())
    {
      QVector3D pos_real(m_position + m_transform.translation());
      ray_tmp.setPosition(ray_tmp.position() - pos_real);
    }
  QVector3D pos = ray_tmp.position();
  QVector3D dir = ray_tmp.direction();
  qreal k(0), k1(0), k2(0);
  qreal a(0), b(0), c(0);
  qreal delta(0);

  a = pow(dir.x(), 2) + pow(dir.y(), 2);
  b = 2 * (pos.x() * dir.x() + pos.y() * dir.y());
  c = pow(pos.x(), 2) + pow(pos.y(), 2) - pow(m_radius, 2);
  delta = pow(b, 2) - 4 * a * c;

  if (delta >= 0)
    {
      k1 = (- b - sqrt(delta)) / (2 * a);
      k2 = (- b + sqrt(delta)) / (2 * a);
      if (k1 <= k2)
	k = k1;
      else if (k2 <= k1)
	k = k2;
      if (k > 0)
	{
	  ray.setK(k);
	  ray.setColor(m_color);
	  return true;
	}
    }
  return false;
}
// === END ===
