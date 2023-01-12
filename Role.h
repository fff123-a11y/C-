#pragma once
#include "./Common.h"
class Element;
class Role 
{
public:
	Role(int x=0,int y=300);
	~Role();
	void event(ExMessage msg);
	void show();
	void update();
	Element* getRole();

private:
	Element* role;
	string curType;			//状态切换
	Dir dir;
	int frame;			
};
