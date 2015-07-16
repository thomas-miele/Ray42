//
// RScene.hpp for Ray42 in /home/miele_t//GitHub/Ray42/src/header
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Thu Nov  1 17:07:19 2012 thomas miele
// Last update Thu Nov  1 18:27:40 2012 thomas miele
//

#ifndef R_SCENE_HEADER
#define R_SCENE_HEADER

#include "RListItem.hpp"

#include <vector>
#include "RCamera.hpp"
#include "RObject.hpp"

class RScene
{
public:
  RScene(RCamera& camera, RListItem& listItem);
  ~RScene();

private:
  RCamera m_camera;
  std::vector<RObject*> m_objects;
  std::vector<RObject*> m_lights;
};

#endif  // !R_SCENE_HEADER
