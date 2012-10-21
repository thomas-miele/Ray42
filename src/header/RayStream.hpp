//
// RayStream.hpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Wed Oct  3 20:29:52 2012 thomas miele
// Last update Mon Oct  8 22:15:53 2012 thomas miele
//

#ifndef RAY_STREAM_HEADER
#define RAY_STREAM_HEADER

#include <QString>
#include <QImage>
#include <QPixmap>
#include <QLabel>

#define	STREAM_FORMAT QImage::Format_ARGB32
#define STREAM_WIDTH 500
#define STREAM_HEIGHT 500
#define STREAM_MAX_WIDTH 1080
#define STREAM_MAX_HEIGHT 720
#define STREAM_FILL_COLOR 0xff000000

class RayStream
{
public:
  RayStream();
  RayStream(int x, int y, QImage::Format format = STREAM_FORMAT);
  // Get method
  int width() const;
  int height() const;
  QImage::Format format() const;
  QString path() const;
  QString name() const;
  QImage image() const;
  QPixmap pixmap() const;
  uint pixelColor(int x, int y) const;
  // Set Methods
  void setImage(int x, int y, QImage::Format format = STREAM_FORMAT);
  void setImage();
  void setPixmap();
  void setLabel();
  // foo
  void setPixelColor(int x, int y, uint index_or_rgb);
  void display();
private:
  int m_width;
  int m_height;
  QImage::Format m_format;
  QString m_name;
  QString m_path;
  QImage m_image;
  QPixmap m_pixmap;
  QLabel m_label;
};

#endif  // !RAY_STREAM_HEADER
