#include "Game.h"

void Game::initWindow()
{
	window.create(sf::VideoMode({ 1280, 720 }), "Arena Game");
	window.setFramerateLimit(60);
}




void Game::initTestPlayer()
{
	testPlayer.setSize({ 40.f,40.f });
	testPlayer.setFillColor(sf::Color::Red);
	testPlayer.setPosition({ 300.f,300.f });
}




void Game::initWalls()
{
	walls.push_back(Wall({ 100.f,100.f }, { 200.f,50.f }));
	walls.push_back(Wall({ 400.f,200.f }, { 50.f,200.f }));
	walls.push_back(Wall({ 700.f,500.f }, { 300.f,50.f }));
}


Game::Game()
{
	initWindow();
	initWalls();
	initTestPlayer();

}

void Game::run()
{
	while (window.isOpen())
	{
		processEvents();
		update();
		render();
	}
}


void Game::processEvents()
{
	while (const std::optional event = window.pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			window.close();
		}
	}
}

void Game::update()
{
	sf::Vector2f oldPosition = testPlayer.getPosition();

	float speed = 3.f;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z))
		testPlayer.move({ 0,-speed });

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		testPlayer.move({ 0,speed });

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
		testPlayer.move({ -speed,0 });

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		testPlayer.move({ speed,0 });

	Collider playerCollider(testPlayer);

	for (auto& wall : walls)
	{
		if (playerCollider.checkCollision(wall.GetCollider()))
		{
			testPlayer.setPosition(oldPosition);
			std::cout << "Collision !" << std::endl;
		}
	}
}

void Game::render()
{
	window.clear();

	for (auto& wall : walls)
	{
		wall.Draw(window);
	}
	window.draw(testPlayer);
	window.display();

}