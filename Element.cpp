#include "Element.h"
#include "./Res.h"
Element::Element()
{

}
Element::Element(int x, int y, bool live, int hp):point(x,y)
{
    this->live = live;
    this->hp = hp;
}

int& Element::getx()
{
    // TODO: 在此处插入 return 语句
    return point.getX();
}

int& Element::gety()
{
    // TODO: 在此处插入 return 语句
    return point.getY();
}

bool& Element::getlive()
{
    // TODO: 在此处插入 return 语句
    return live;
}

int& Element::gethp()
{
    // TODO: 在此处插入 return 语句
    return hp;
}

int Element::getheight(string name)
{
    return Res::getheight(name);
}

int Element::getwidth(string name)
{
    return  Res::getwidth(name);
}

void Element::moveElement(int speed, Dir dir)
{
    point.move(speed, dir);
}

void Element::drawElement(int frame, string name, Dir dir)
{
    Res::drawIMG(point.getX(), point.getY(), name, frame, dir);
}
