#pragma once
#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include <graphics.h>
#include <memory>
#include <cstdlib>
using namespace std;

#define WIDTH 1000
#define HEIGHT 600
#define IMGW 400
#define IMGH 300
#define SPEED 1

enum class Dir
{
	Left = 0,
	Right = 2,
	Up=1,
	Down=3
};
