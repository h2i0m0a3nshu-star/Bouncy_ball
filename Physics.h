#pragma once
#include <raylib.h>

class physics
{
public:
	bool collision_check_x(Rectangle entity1, Rectangle entity2);
	bool collision_check_y(Rectangle entity1, Rectangle entity2);
};