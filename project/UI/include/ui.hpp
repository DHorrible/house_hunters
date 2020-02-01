#pragma once

class Button;
class Tile;
class Scene;

#include <list>

#include "utility.hpp"
#include "properties.hpp"

#include "SFML/Graphics.hpp"

class Button {
public:
    sf::Sprite sprite;
    sf::Text text;

    Action action;

    Button(
        const sf::Sprite& sprite = sf::Sprite(),
        const Action& action = Action([](){}),
        const sf::Text& text = sf::Text()
        );
};

class Tile {
public:
    sf::Sprite sprite;

    std::list<Button> buttons;
    std::list<sf::Text> texts;
    std::list<Tile> tiles;

    bool isHidden;

    Tile(
        const sf::Sprite& sprite = sf::Sprite(),
        const std::list<Button>& buttons = std::list<Button>(),
        const std::list<sf::Text>& texts = std::list<sf::Text>(),
        const std::list<Tile>& tiles = std::list<Tile>(),
        bool isHidden = false
        );
};

class Scene {
public:
    sf::Sprite sprite;

    std::list<Tile> tiles;
    
    Scene(
        const sf::Sprite& sprite = sf::Sprite(),
        std::list<Tile> tiles = std::list<Tile>()
    );
};

void drawTile(sf::RenderWindow& window, const Tile& tile);

// main draw function
void draw(sf::RenderWindow& window);
