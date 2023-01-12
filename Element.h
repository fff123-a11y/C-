#pragma once
#include "./Common.h"
#include "./Point.h"
class Element 
{
public:
	Element();
	Element(int x, int y, bool live, int hp = 0);
	int& getx();
	int& gety();
	bool& getlive();
	int& gethp();
	int getheight(string name);
	int getwidth(string name);
	void drawElement(int frame, string name, enum class Dir dir);
	void moveElement(int speed, enum class Dir dir);
	//void setx(int x);

protected:
	Point point;	//位置
	//自由发挥
	bool live;		//存活状态
	int hp;			//血量
};
