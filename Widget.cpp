#include "Widget.h"
#include "./Res.h"
Widget::Widget(int w, int h):width(w),height(h)
{
	initgraph(w, h);
}

Widget::~Widget()
{
	closegraph();
}

int Widget::getwidth() const
{
	return width;
}

int Widget::getheight() const
{
	return height;
}

void Widget::show()
{
	Res::drawIMG(0, 0, "BK");
}
