//
// RPlane.hpp for Ray42 in /home/miele_t//Desktop/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Mon Oct  8 22:21:16 2012 thomas miele
// Last update Thu Oct 25 21:23:49 2012 thomas miele
//

#ifndef R_PLANE_HEADER
#define R_PLANE_HEADER

#include "RObject.hpp"
#include <cmath>

// plane definition :
// - vector n normal to plane ie orthogonal
// - a vector position who belong to plane
// - a distance d -> 

class RPlane : public RObject
{
public:
  RPlane(QVector3D normal, qreal distance);
  RPlane(QVector3D position, QVector3D normal, qreal distance);
  RPlane(qreal x, qreal y, qreal z, qreal nx, qreal ny, qreal nz, qreal distance);
  virtual ~RPlane();

  QVector3D normal() const;
  void setNormal(QVector3D& normal);
  void setNormal(qreal nx, qreal ny, qreal nz);

  qreal distance() const;
  void setDistance(qreal distance);
  virtual bool intersection(Ray& ray);
private:
  // transation colineaire au vecteur normal
  QVector3D m_normal;
  qreal m_distance;
};

#endif  // !R_PLANE_HEADER
