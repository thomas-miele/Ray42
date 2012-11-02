//
// RTransform.hpp for Ray42 in /home/miele_t//GitHub/Ray42/src/header
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Wed Oct 24 21:52:51 2012 thomas miele
// Last update Fri Nov  2 17:49:01 2012 thomas miele
//

#ifndef R_TRANSFORM_HEADER
#define R_TRANSFORM_HEADER

#include <utility>
#include <QVector3D>

typedef std::pair<bool, QVector3D> PairTransform;

class RTransform
{
public:
  RTransform(PairTransform transform);
  RTransform(bool mod, QVector3D value = QVector3D(0, 0, 0));
  // GET
  PairTransform transform() const;
  bool mod() const;
  QVector3D value() const;
  // SET
  void setTransform(PairTransform transform);
  void chmod(bool chmod);
  bool setValue(QVector3D value);
private:
  PairTransform m_transform;
};

#endif  // !R_TRANSFORM_HEADER
