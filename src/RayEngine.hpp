//
// RayEngine.hpp for Ray42 in /home/miele_t//GitHub/Ray42/src/header
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Fri Nov  2 17:58:10 2012 thomas miele
// Last update Fri Nov  2 18:08:59 2012 thomas miele
//

#ifndef RAY_ENGINE_HEADER
#define RAY_ENGINE_HEADER

#include <cfloat>
#include <vector>

#include "RayStream.hpp"
#include "Ray.hpp"
#include "RCamera.hpp"

#include "RSphere.hpp"
#include "RCylinder.hpp"
#include "RPlane.hpp"

class RayEngine
{
public:
  static uint calc(Ray& ray, std::vector<RObject*>& scene);
  static uint init_calc(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene, int x, int y);
  static void raytracer(RayStream& stream, RCamera& camera, std::vector<RObject*>& scene);
};

#endif  // !RAY_ENGINE_HEADER
