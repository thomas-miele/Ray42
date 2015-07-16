//
// RCamera.cpp for Ray42 in /home/miele_t//Desktop/Ray42
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Sat Oct  6 19:38:50 2012 thomas miele
// Last update Sun Oct 21 22:13:40 2012 thomas miele
//

#include "RCamera.hpp"

RCamera::RCamera(QVector3D position, QVector3D look_at) : m_distance(0), m_position(position), m_look_at(look_at)
{
  m_ray = m_look_at - m_position;
  m_distance = m_ray.length();
}

qreal RCamera::distance() const {return m_distance;}

QVector3D RCamera::position() const {return m_position;}

QVector3D RCamera::look_at() const {return m_look_at;}

