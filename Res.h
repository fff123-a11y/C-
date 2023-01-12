#pragma once
#include "./Common.h"
class Res 
{
public:
	~Res();
	static Res* GetInstance();			//访问对象的指针
	static map<string, pair<int, IMAGE*>> img;
	static int getwidth(string name);
	static int getheight(string name);
	static void drawIMG(int x, int y, string name, int frame, enum class Dir dir);	//帧图
	static void drawIMG(int x, int y, string name); //显示普通图像
	//string: 标识动作的类型
	//pair<int, IMAGE*>   int: 一个动作几张
	//IMAGE*  存储

private:
	Res();
};
