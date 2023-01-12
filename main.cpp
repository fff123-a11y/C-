/*
	1.资源的管理
	2.状态切换
*/
#include "Game.h"
int main() 
{
	srand((unsigned int)time(NULL));
	unique_ptr<Game> g(new Game);
	g->gameLoop();
	return 0;
}
