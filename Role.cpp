#include "Role.h"
#include "./Element.h"
#include "./Res.h"
Role::Role(int x, int y)
{
	role = new Element(x, y, true, 100);
	curType = "stand";
	dir = Dir::Right;
	frame = 0;
}

Role::~Role()
{
}

void Role::event(ExMessage msg)
{
	if (msg.message == WM_KEYDOWN) 
	{
		switch (msg.vkcode) 
		{
		case 'A':
		case VK_LEFT:
			dir = Dir::Left;
			curType = "move";
			role->moveElement(3, dir);
			break;
		case 'D':
		case VK_RIGHT:
			dir = Dir::Right;
			curType = "move";
			role->moveElement(3, dir);
			break;
		case 'K':
			curType = "cut";
			break;
		case 'J':
			curType = "jumpcut";
			break;
		case ' ':
			curType = "jump";
			break;
		}
	}
}


void Role::show()
{
	role->drawElement(frame, curType, dir);
}

void Role::update()
{
	if (curType == "stand") 
	{
		frame = 0;
	}
	else 
	{
		frame++;
		if (frame >= Res::GetInstance()->img[curType].first) 
		{
			curType = "stand";
			frame = 0;
		}
	}
}

Element* Role::getRole()
{
	return role;
}
