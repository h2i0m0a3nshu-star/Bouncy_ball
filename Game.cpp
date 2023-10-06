#include "Game.h"

Game::Game(int width, int height, string title)
{
	InitWindow(width, height, title.c_str());
	SetTargetFPS(60);
}

bool Game::should_close() const
{
	return WindowShouldClose();
}

void Game::tick()
{
	BeginDrawing();
	update();
	draw();
	EndDrawing();
}

Game::~Game()
{
	CloseWindow();
}

void Game::draw()
{
	ClearBackground(BLACK);
	DrawRectangleLines(border.x,border.y,border.width,border.height, BLUE);
	bounce.draw_ball(bounce.pos, bounce.radius,bounce.ball_collision);
}

void Game::update()
{
	bounce.update_ball(bounce.pos, bounce.vel,bounce.ball_collision,bounce.radius);
	if (p.collision_check_x(bounce.ball_collision, border_collision_rect)){bounce.collision_response_x(bounce.vel);}
	if (p.collision_check_y(bounce.ball_collision, border_collision_rect)){bounce.collision_response_y(bounce.vel);}
}


