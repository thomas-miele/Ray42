//
// RListItem.hpp for Ray42 in /home/miele_t//GitHub/Ray42/src/header
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Thu Nov  1 17:31:00 2012 thomas miele
// Last update Fri Nov  2 17:55:34 2012 thomas miele
//

#ifndef R_LIST_ITEM_HEADER
#define R_LIST_ITEM_HEADER

#include <list>
#include "RObject.hpp"

class RListItem
{
public:
  RListItem();
  virtual ~RListItem();
  // GET
  uint sizeObjects() const;
  uint sizeLights() const;
  // FOO
  void addObject(RObject *object);
  void addLight(RObject *object);
private:
  std::list<RObject*>  m_list_objects;
  std::list<RObject*> m_list_lights;
};

#endif  // !R_LIST_ITEM_HEADER
