#pragma once

#include <SFML/Graphics.hpp>

class Game
{    
private:
    unsigned int windowWidth = 800;
    unsigned int windowHeight = 600;
        
    sf::RenderWindow window{ { windowWidth, windowHeight}, "Boids" };
    
    void update();
    void draw();
    
public:
    Game();
    void run();    
};
