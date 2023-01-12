#include "Monster.h"
#include "./Element.h"
#include "./Res.h"
Monster::Monster(int x, int y)
{
	monster = new Element(x, y, true, 100);
	curType = "monster";
	dir = Dir::Left;
	frame = 0;
}

Monster::~Monster()
{
	delete monster;
}

void Monster::show()
{
	monster->drawElement(frame, curType, dir);
}
void Monster::move()
{
	int data = rand() % 100;
	if (data > 30 && monster->getx() >= 0)
	{
		dir = Dir::Left;
	}
	else if (monster->getx() <= WIDTH) 
	{
		dir = Dir::Right;
	}
	monster->moveElement(30, dir);
}

void Monster::update()
{
	frame++;
	if (frame >= Res::GetInstance()->img[curType].first) 
	{
		frame = 0;
	}
}

Element* Monster::getMonster()
{
	return monster;
}
