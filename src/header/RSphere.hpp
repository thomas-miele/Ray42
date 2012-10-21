//
// RSphere.hpp for Ray42 in /home/miele_t//Desktop/Ray42/src
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 23:25:10 2012 thomas miele
// Last update Mon Oct  8 22:09:13 2012 thomas miele
//

#ifndef R_SPHERE_HEADER
#define R_SPHERE_HEADER

#include "RObject.hpp"
#include <cmath>

class RSphere : public RObject
{
public:
  RSphere(qreal radius);
  RSphere(QVector3D position, qreal radius);
  RSphere(qreal x, qreal y, qreal z, qreal radius);

  // destructeur virtual sinon lorsque que RSphere delete,
  // seul RObject est supprimer et il reste une zone memoire
  virtual ~RSphere();

  qreal radius() const;
  void setRadius(qreal radius);
  // mot cle virtual optionnel puisque intersection virtuel par heritage
  // par contre fonction reimplementer sinon deviendrait virtuelle pure
  // donc class abstraire -> pas d'instance d'objet possibleX
  // cette fonction ne prend pas d'objet en parametre puisque on est 
  // deja dans l'object ;-)
  virtual bool intersection(Ray& ray);
private:
  qreal m_radius;
};

#endif  // !R_SPHERE_HEADER
