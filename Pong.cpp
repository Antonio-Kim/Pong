#include "Bat.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>

int main()
{
	sf::VideoMode vm(1920, 1080);
	sf::RenderWindow window(vm, "Pong");

	int score = 0;
	int lives = 3;

	Bat bat(1920 / 2, 1080 - 20);
	
	sf::Text hud;
	sf::Font font;
	font.loadFromFile("fonts/digital.ttf");
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(sf::Color::White);
	hud.setPosition(20, 20);

	sf::Clock clock;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			window.close();
		}

		sf::Keyboard::isKeyPressed(sf::Keyboard::Left) ? bat.moveLeft() : bat.stopLeft();
		sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ? bat.moveRight() : bat.stopRight();


		sf::Time dt = clock.restart();
		bat.updateTime(dt);
		std::stringstream ss;
		ss << "Score: " << score << "  Lives: " << lives;
		hud.setString(ss.str());


		window.clear();
		window.draw(hud);
		window.draw(bat.getShape());
		window.display();
	}

	return 0;
}