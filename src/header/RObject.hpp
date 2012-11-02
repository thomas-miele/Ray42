//
// RObject.hpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 20:46:11 2012 thomas miele
// Last update Fri Nov  2 17:18:46 2012 thomas miele
//

#ifndef R_OBJECT_HEADER
#define R_OBJECT_HEADER

#include <QVector3D>
#include "Ray.hpp"
#include "RTransform.hpp"

enum TransformType {TRANSLATE = 0, ROTATE = 1, SCALE = 2};

class RObject
{
public:
  RObject();
  RObject(QVector3D position);
  RObject(qreal x, qreal y, qreal z);
  virtual ~RObject();

  virtual bool intersection(Ray& ray) = 0;
  // Position
  QVector3D position() const;
  void setPosition(QVector3D *position);
  void setPosition(qreal x, qreal y, qreal z);
  // Transform
  PairTransform transform(TransformType type) const;
  bool setTransformValue(TransformType type, QVector3D value);
  void setTransformChmod(TransformType type, bool chmod);
  // Color
  uint color() const;
  void setColor(uint index_or_rgb);
protected:
  QVector3D m_position;
  RTransform m_translation;
  RTransform m_rotation;
  RTransform m_scale;
  uint m_color;
};

#endif  // !R_OBJECT_HEADER
