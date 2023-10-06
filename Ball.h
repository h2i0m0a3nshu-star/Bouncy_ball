#pragma once
#include <raylib.h>
class ball
{
public:
	float radius = 20;
	Vector2 pos = { 400,200 };
	Vector2 vel = { 5,3 };
	Rectangle ball_collision = { pos.x-radius,pos.y-radius,2*radius,2*radius};
	void draw_ball(Vector2 p, float radius, Rectangle rect);
	void update_ball(Vector2 &p, Vector2 &v, Rectangle &collision_rect, float radius);
	void collision_response_x(Vector2 &v);
	void collision_response_y(Vector2 &v);
};

