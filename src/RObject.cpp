//
// RObject.cpp for Ray42 in /home/miele_t//Desktop/Ray42
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Sat Oct  6 22:48:35 2012 thomas miele
// Last update Fri Nov  2 17:47:04 2012 thomas miele
//

#include "RObject.hpp"

RObject::RObject() : m_position(0, 0, 0), m_translation(true), m_rotation(false), m_scale(false), m_color(0xff000000) {}

RObject::RObject(QVector3D position) : m_position(position), m_translation(true), m_rotation(false), m_scale(false), m_color(0xff000000) {}

RObject::RObject(qreal x, qreal y, qreal z) : m_position(x, y, z), m_translation(true), m_rotation(false), m_scale(false), m_color(0xff000000) {}

RObject::~RObject() {}

// Position
QVector3D RObject::position() const {return m_position;}

void RObject::setPosition(QVector3D *position)
{
  m_position = *position;
}

void RObject::setPosition(qreal x, qreal y, qreal z)
{
  m_position.setX(x);
  m_position.setY(y);
  m_position.setZ(z);
}

// Transform
PairTransform RObject::transform(TransformType type) const
{
  if (type == TRANSLATE)
    {
      return m_translation.transform();
    }
  else if (type == ROTATE)
    {
      return m_rotation.transform();
    }
  else if (type == SCALE)
    {
      return m_scale.transform();
    }
}

bool RObject::setTransformValue(TransformType type, QVector3D value)
{
  if (type == TRANSLATE)
    {
      if (m_translation.mod())
    {
      m_translation.setValue(value);
      return true;
    }
    }
  else if (type == ROTATE)
    {
      if (m_rotation.mod())
    {
      m_rotation.setValue(value);
      return true;
    }
    }
  else if (type == SCALE)
    {
      if (m_scale.mod())
    {
      m_scale.setValue(value);
      return true;
    }
    }
  return false;
}

void RObject::setTransformChmod(TransformType type, bool chmod)
{
  if (type == TRANSLATE)
    {
      m_translation.chmod(chmod);
    }
  else if (type == ROTATE)
    {
      m_rotation.chmod(chmod);
    }
  else if (type == SCALE)
    {
      return m_scale.chmod(chmod);
    }
}

// Color
uint RObject::color() const {return m_color;}

void RObject::setColor(uint index_or_rgb)
{
  m_color = index_or_rgb;
}
