#pragma once
#include "./Widget.h"
#include "./Role.h"
#include "./Timer.hpp"
#include "./Monster.h"
class Game 
{
public:
	Game();
	void gameLoop();
protected:
	unique_ptr<Widget> w;
	unique_ptr<Role> r;
	unique_ptr<Monster> m;
};
