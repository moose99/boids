#include "Game.h"

Game::Game()
{
    window.setFramerateLimit(60);
}

void Game::update()
{
    // update/move objects here
}

void Game::draw()
{
    // erase window
    window.clear();
    
    // draw objects here
	// ...............
	sf::CircleShape circle;
	circle.setRadius(50);
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(0,0);
	window.draw(circle);

    // draw window
    window.display();          
}

void Game::run()
{
    //
    // main game loop
    //
    while (window.isOpen())
    {
        // check for exit
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window or hit escape to exit
            if ( (event.type == sf::Event::Closed) || 
				(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) )
            {
                window.close();
            }
        }
        
        update();        
        draw();
    }    
}
