#include "Ball.h"

void ball::draw_ball(Vector2 p, float radius,Rectangle rect)
{
	DrawCircle(int(p.x), int(p.y), radius, RED);
}

void ball::update_ball(Vector2 &p, Vector2 &v, Rectangle &collision_rect,float radius)
{
	p.x += 2*v.x;
	p.y += 2*v.y;
	collision_rect.x += 2*v.x;
	collision_rect.y += 2*v.y;
}

void ball::collision_response_x(Vector2& v)
{
		v.x *= -1;
}

void ball::collision_response_y(Vector2& v)
{
	v.y *= -1;
}

