//
// RScene.cpp for Ray42 in /home/miele_t//GitHub/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Thu Nov  1 17:25:35 2012 thomas miele
// Last update Fri Nov  2 18:09:22 2012 thomas miele
//

#include "header/RScene.hpp"

using namespace std;

RScene::RScene(RCamera& camera, RListItem& ListItem) : m_camera(camera), m_objects(ListItem.sizeObjects()), m_lights(ListItem.sizeLights())
{
  list<RObject*>::iterator it;

}

RScene::~RScene()
{
  m_objects.clear();
  m_lights.clear();
}

