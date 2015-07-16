//
// RCylinder.hpp for Ray42 in /home/miele_t//Desktop/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Thu Oct 11 23:12:07 2012 thomas miele
// Last update Thu Oct 11 23:13:06 2012 thomas miele
//

#ifndef R_CYLINDER_HEADER
#define R_CYLINDER_HEADER

#include "RObject.hpp"
#include <cmath>

class RCylinder : public RObject
{
public:
  RCylinder(qreal radius);
  RCylinder(QVector3D position, qreal radius);
  RCylinder(qreal x, qreal y, qreal z, qreal radius);

  // destructeur virtual sinon lorsque que RCylinder delete,
  // seul RObject est supprimer et il reste une zone memoire
  virtual ~RCylinder();

  qreal radius() const;
  void setRadius(qreal radius);

  virtual bool intersection(Ray& ray);
private:
  qreal m_radius;
};

#endif  // !R_CYLINDER_HEADER
