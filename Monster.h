#pragma once
#include "./Common.h"
class Element;
class Monster 
{
public:
	Monster(int x = 600, int y = 300);
	~Monster();
	void show();
	void move();
	void update();
	Element* getMonster();

protected:
	Element* monster;
	string curType;
	Dir dir;
	int frame;
};
