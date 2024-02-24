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
	font.loadFromFile("fonts/digital.tff");
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(sf::Color::White);
	hud.setPosition(20, 20);

	sf::Clock clock;

	while (window.isOpen()) {

	}

	return 0;
}