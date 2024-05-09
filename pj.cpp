#include "pj.hpp"
#include <QKeyEvent>

void Pj::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::LeftArrow )	setPos(x() - 10, y());
	else if (event->key() == Qt::RightArrow )	setPos(x() + 10, y());
	else if (event->key() == Qt::UpArrow )	setPos(x(), y() + 10);
	else if (event->key() == Qt::DownArrow )	setPos(x(), y() - 10);
}
