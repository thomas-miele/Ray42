//
// RListItem.cpp for Ray42 in /home/miele_t//GitHub/Ray42/src
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Thu Nov  1 17:45:49 2012 thomas miele
// Last update Thu Nov  1 18:24:55 2012 thomas miele
//

#include "RListItem.hpp"

using namespace std;

RListItem::RListItem() : m_list_objects(0), m_list_lights(0)
{}

RListItem::~RListItem()
{
  list<RObject*>::iterator it;

  for (it = m_list_objects.begin(); it != m_list_objects.end(); it++)
    {
      *it = 0;
    }
  m_list_objects.clear();
  for (it = m_list_lights.begin(); it != m_list_lights.end(); it++)
    {
      *it = 0;
    }
  m_list_lights.clear();
}

// GET
uint RListItem::sizeObjects() const
{
  return m_list_objects.size();
}

uint RListItem::sizeLights() const
{
  return m_list_lights.size();
}
