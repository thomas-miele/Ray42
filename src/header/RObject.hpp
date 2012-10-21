//
// RObject.hpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 20:46:11 2012 thomas miele
// Last update Thu Oct 11 22:35:30 2012 thomas miele
//

#ifndef R_OBJECT_HEADER
#define R_OBJECT_HEADER

#include <QVector3D>
#include "Ray.hpp"

class RObject
{
public:
  RObject();
  RObject(QVector3D position);
  RObject(qreal x, qreal y, qreal z);
  virtual ~RObject();

  virtual bool intersection(Ray& ray) = 0;

  QVector3D position() const;
  void setPosition(QVector3D position);
  void setPosition(qreal x, qreal y, qreal z);

  uint color() const;
  void setColor(uint index_or_rgb);
protected:
  QVector3D m_position;
  uint m_color;
};

#endif  // !R_OBJECT_HEADER
