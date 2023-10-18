#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Paint");
	while (window.isOpen())
	{
		sf::Event event;
		//sf::VertexArray penTrack(sf::LinesStrip);
		sf::CircleShape shape;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			else if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) 
			{
				sf::CircleShape circle;
				circle.setPosition(event.mouseButton.x, event.mouseButton.y);
				circle.setRadius(20.0f);
				circle.setFillColor(sf::Color::Black);
				shape = circle;
				window.draw(shape);
			}
		}
		window.clear(sf::Color::White);
		window.draw(shape);
		window.display();
	}
	return 0;
}