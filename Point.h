#pragma once
#include "./Common.h"
class Point 
{
public:
	Point(int x = 0, int y = 0);
	Point(const Point& object);
	int& getX();
	int& getY();
	void move(int speed, enum class Dir dir);
protected:
	int x;
	int y;
};
