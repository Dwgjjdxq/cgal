#ifndef CGAL_QT_WIDGET_TRIANGULATION_2_H
#define CGAL_QT_WIDGET_TRIANGULATION_2_H

#include <CGAL/IO/Qt_widget.h>
#include <CGAL/Triangulation_2.h>

template < class Gt, class Tds>
Qt_widget&
operator<<(Qt_widget& w,  const Triangulation_2<Gt, Tds> &t)
{
  w.lock();
  t.draw_triangulation(w);
  w.unlock();
  return w;
}

#endif
