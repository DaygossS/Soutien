#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Wall.h"
#include <iostream>
class Game
{
private:

	sf::RenderWindow window;
	std::vector<Wall> walls;
	sf::RectangleShape testPlayer;
	
	void initWalls();
	void initWindow();
	void initTestPlayer();

public:
	Game();
	void run();
	void processEvents();
	void update();
	void render();
};

