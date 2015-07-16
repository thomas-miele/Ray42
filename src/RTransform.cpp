//
// RTransform.cpp for Ray42 in /home/miele_t//GitHub/Ray42/src
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Wed Oct 24 22:51:50 2012 thomas miele
// Last update Fri Nov  2 17:49:31 2012 thomas miele
//

#include "RTransform.hpp"

RTransform::RTransform(PairTransform transform) : m_transform(transform)
{}

RTransform::RTransform(bool mod, QVector3D value) : m_transform(mod, value)
{}

// GET
PairTransform RTransform::transform() const {return m_transform;}
bool RTransform::mod() const {return m_transform.first;}
QVector3D RTransform::value() const {return m_transform.second;}

// SET
void RTransform::setTransform(PairTransform transform)
{
  m_transform = transform;
}

void RTransform::chmod(bool chmod)
{
  m_transform.first = chmod;
}

bool RTransform::setValue(QVector3D value)
{
  if (m_transform.first)
    {
      m_transform.second = value;
      return true;
    }
  return false;
}
