//
// RTransform.cpp for Ray42 in /home/miele_t//GitHub/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Wed Oct 24 22:51:50 2012 thomas miele
// Last update Wed Oct 31 14:09:24 2012 thomas miele
//

#include "header/RTransform.hpp"

RTransform::RTransform(bool canTranslate, bool canRotate, bool canScale) : m_translation(0, 0, 0), m_rotation(0, 0, 0), m_scale(0, 0, 0)
{
  m_canTranslate = canTranslate;
  m_canRotate = canRotate;
  m_canScale = canScale;
}

// GET
QVector3D RTransform::translation() const {return m_translation;}
QVector3D RTransform::rotation() const {return m_rotation;}
QVector3D RTransform::scale() const {return m_scale;}

bool RTransform::canTranslate() const {return m_canTranslate;}
bool RTransform::canRotate() const {return m_canRotate;}
bool RTransform::canScale() const {return m_canScale;}

// SET
void RTransform::chmod(bool canTranslate, bool canRotate, bool canScale)
{
  m_canTranslate = canTranslate;
  m_canRotate = canRotate;
  m_canScale = canScale;
}

bool RTransform::setTranslation(QVector3D translation)
{
  if (m_canTranslate)
    {
      m_translation = translation;
      return true;
    }
  return false;
}

bool RTransform::setRotation(QVector3D rotation)
{
  if (m_canRotate)
    {
      m_rotation = rotation;
      return true;
    }
  return false;
}

bool RTransform::setScale(QVector3D scale)
{
  if (m_canScale)
    {
      m_scale = scale;
      return true;
    }
  return false;
}
