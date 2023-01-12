#include "Point.h"
Point::Point(int x, int y):x(x),y(y)
{

}

Point::Point(const Point& object)
{
	this->x = object.x;
	this->y = object.y;
}

int& Point::getX()
{
	// TODO: 在此处插入 return 语句
	return x;
}

int& Point::getY()
{
	// TODO: 在此处插入 return 语句
	return y;
}

void Point::move(int speed, Dir dir)
{
	switch (dir) 
	{
	case Dir::Left:
		this->x -= speed;
		break;
	case Dir::Right:
		this->x += speed;
		break;
	case Dir::Up:
		this->y -= speed;
		break;
	case Dir::Down:
		this->y += speed;
		break;
	}
}
