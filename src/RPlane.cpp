//
// RPlane.cpp for Ray42 in /home/miele_t//Desktop/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Mon Oct  8 22:21:23 2012 thomas miele
// Last update Fri Nov  2 17:47:29 2012 thomas miele
//

#include "header/RPlane.hpp"

using namespace std;

// ### CONSTRUCTOR ###
RPlane::RPlane(QVector3D normal, qreal distance) : RObject(), m_normal(normal), m_distance(distance)
{
  setTransformChmod(TRANSLATE, true);
  setTransformChmod(ROTATE, true);
  setTransformChmod(SCALE, false);
  m_normal.normalize();
}

RPlane::RPlane(QVector3D position, QVector3D normal, qreal distance) : RObject(position), m_normal(normal), m_distance(distance)
{
  setTransformChmod(TRANSLATE, true);
  setTransformChmod(ROTATE, true);
  setTransformChmod(SCALE, false);
  m_normal.normalize();
}

RPlane::RPlane(qreal x, qreal y, qreal z, qreal nx, qreal ny, qreal nz, qreal distance) : RObject(x, y, z), m_normal(nx, ny, nz), m_distance(distance)
{
  setTransformChmod(TRANSLATE, true);
  setTransformChmod(ROTATE, true);
  setTransformChmod(SCALE, false);
  m_normal.normalize();
}

RPlane::~RPlane() {}

// === END ===

// ### GET METHODS ###
QVector3D RPlane::normal() const {return m_normal;}

qreal RPlane::distance() const {return m_distance;}
// === END ===

// ### SET METHODS ###

void RPlane::setNormal(QVector3D& normal)
{
  m_normal = normal;
  m_normal.normalize();
}

void RPlane::setNormal(qreal nx, qreal ny, qreal nz)
{
  m_normal.setX(nx);
  m_normal.setY(ny);
  m_normal.setZ(nz);
  m_normal.normalize();
}

void RPlane::setDistance(qreal distance) {m_distance = distance;}
// === END ===

// ### FOO ##
bool RPlane::intersection(Ray& ray)
{
  Ray ray_tmp(ray);
  if (m_translation.mod())
    {
      QVector3D pos_real(m_position + m_translation.value());
      ray_tmp.setPosition(ray_tmp.position() - pos_real);
    }
  QVector3D pos = ray_tmp.position();
  QVector3D dir = ray_tmp.direction();
  qreal k(0);

  qreal den = QVector3D::dotProduct(m_normal, dir);
  qreal num(0);

  if (den != 0)
    {
      num = m_distance - QVector3D::dotProduct(m_normal, pos);
      k = num / den;
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
