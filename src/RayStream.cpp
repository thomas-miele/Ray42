//
// RayStream.cpp for Ray42 in /home/miele_t//Desktop/Ray42
//
// Made by thomas miele
// Login   <miele_t@epitech.net>
//
// Started on  Wed Oct  3 20:31:52 2012 thomas miele
// Last update Sun Oct 21 22:13:27 2012 thomas miele
//

#include "RayStream.hpp"

// ### CONSTRUCTORS ###
RayStream::RayStream() : m_name("untiled"), m_path(), m_image(), m_pixmap(), m_label("none")
{
  m_width = STREAM_WIDTH;
  m_height = STREAM_HEIGHT;
  m_format = STREAM_FORMAT;
}

RayStream::RayStream(int x, int y, QImage::Format format) : m_name("untiled"), m_path(), m_image(), m_pixmap(), m_label("none")
{
  m_format = format;

  if (x < 0)
    x = -x;
  if (y < 0)
    y = -y;

  if (x > STREAM_MAX_WIDTH)
    m_width = STREAM_MAX_WIDTH;
  else
    m_width = x;

  if (y > STREAM_MAX_HEIGHT)
    m_height = STREAM_MAX_HEIGHT;
  else
    m_height = y;
}
// === END ===

// ### GET METHODS ###
int RayStream::width() const
{return m_width;}

int RayStream::height() const
{return m_height;}

QImage::Format RayStream::format() const
{return m_format;}

QString RayStream::path() const
{return m_path;}

QString RayStream::name() const
{return m_name;}

QImage RayStream::image() const
{return m_image;}

QPixmap RayStream::pixmap() const
{return m_pixmap;}

uint RayStream::pixelColor(int x, int y) const
{
  if ((x < 0 || y < 0) || (x > m_width || y > m_height))
    return 0xff000000;
  return m_image.pixel(x, y);
}
// QLabel RayStream::label() const { return m_label; }
// === END ===

// ### SET METHODS ###
void RayStream::setImage(int x, int y, QImage::Format format)
{
  m_format = format;

  if (x < 0)
    x = -x;
  if (y < 0)
    y = -y;

  if (x > STREAM_MAX_WIDTH)
    m_width = STREAM_MAX_WIDTH;
  else
    m_width = x;

  if (y > STREAM_MAX_HEIGHT)
    m_height = STREAM_MAX_HEIGHT;
  else
    m_height = y;

  m_image = QImage(m_width, m_height, m_format);
  m_image.fill(STREAM_FILL_COLOR);
}

void RayStream::setImage()
{
  m_image = QImage(m_width, m_height, m_format);
  m_image.fill(STREAM_FILL_COLOR);
}

void RayStream::setPixmap()
{
  m_pixmap = QPixmap::fromImage(m_image);
}

void RayStream::setLabel()
{
  m_label.setPixmap(m_pixmap);
}
// === END ===

// ### FOO ###
void RayStream::setPixelColor(int x, int y, uint index_or_rgb)
{
  m_image.setPixel(x, y, index_or_rgb);
}

void RayStream::display()
{
  m_label.show();
}
// === END ===
