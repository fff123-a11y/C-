#include "Game.h"

Game::Game() :w(new Widget), r(new Role), m(new Monster)
{

}

void Game::gameLoop()
{
	BeginBatchDraw();
	ExMessage msg;
	while (1)
	{
		w->show();
		r->show();
		m->show();
		FlushBatchDraw();
		while (peekmessage(&msg))
		{
			r->event(msg);
		}
		if (Timer::onTimer(50, 1))
		{
			r->update();
		}
		if (Timer::onTimer(50, 2))
		{
			m->update();
		}
		if (Timer::onTimer(1000, 3))
		{
			m->move();
		}
	}
	EndBatchDraw();
}
