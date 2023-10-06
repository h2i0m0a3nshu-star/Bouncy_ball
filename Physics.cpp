#include "Physics.h"

bool physics::collision_check_x(Rectangle entity1, Rectangle entity2)
{
	if (entity1.x - entity2.x <= 0 || 
		(entity1.x + entity1.width) - (entity2.x + entity2.width) >= 0)
	{
		return true;
	}
    return false;
}

bool physics::collision_check_y(Rectangle entity1, Rectangle entity2)
{
	if (entity1.y - entity2.y <= 0 || 
		(entity1.y + entity1.height) - (entity2.y + entity2.height) >= 0)
	{
		return true;
	}
	return false;
}