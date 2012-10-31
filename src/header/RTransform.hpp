//
// RTransform.hpp for Ray42 in /home/miele_t//GitHub/Ray42/src/header
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Wed Oct 24 21:52:51 2012 thomas miele
// Last update Wed Oct 31 14:08:58 2012 thomas miele
//

#ifndef R_TRANSFORM_HEADER
#define R_TRANSFORM_HEADER

#include <cmath>
#include <QVector3D>

class RTransform
{
public:
  RTransform(bool canTransate = true, bool canRotate = false, bool canScale = false);
  // GET
  QVector3D translation() const;
  QVector3D rotation() const;
  QVector3D scale() const;

  bool canTranslate() const;
  bool canRotate() const;
  bool canScale() const;
  // SET
  void chmod(bool canTranslate, bool canRotate, bool canScale);

  bool setTranslation(QVector3D translation);
  bool setRotation(QVector3D rotation);
  bool setScale(QVector3D scale);
private:
  QVector3D m_translation;
  QVector3D m_rotation;
  QVector3D m_scale;

  bool m_canTranslate;
  bool m_canRotate;
  bool m_canScale;
};

#endif  // !R_TRANSFORM_HEADER
