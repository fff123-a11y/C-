#pragma once
#include "./Common.h"
class Widget 
{
public:
	Widget(int w=WIDTH,int h=HEIGHT);
	~Widget();
	int getwidth()const;
	int getheight()const;
	void show();
protected:
	int width;
	int height;
};
