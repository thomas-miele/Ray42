//
// Ray.hpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 17:47:57 2012 thomas miele
// Last update Tue Oct 23 20:04:09 2012 thomas miele
//

#ifndef	RAY_HEADER
#define RAY_HEADER

#include <QVector3D>

class Ray
{
public:
  Ray(QVector3D pos, QVector3D dir);
  // GET
  QVector3D position() const;
  QVector3D direction() const;

  qreal k() const;
  uint color() const;
  uint index() const;
  QVector3D point() const;
  // SET
  void setPosition(QVector3D pos);
  void setDirection(QVector3D dir);

  void setK(qreal k);
  void setColor(uint color);
  void setIndex(uint index);
  void setPoint(QVector3D point);
  // FOO
  void pointIntersection();
private:
  QVector3D m_position;
  QVector3D m_direction;

  qreal m_k;
  qreal m_color;
  uint m_index;
  QVector3D m_point;
};

#endif  // !RAY_HEADER
