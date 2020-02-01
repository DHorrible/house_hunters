#include "ui.hpp"

Button::Button(
    const sf::Sprite& sprite,
    const Action& action,
    const sf::Text& text
    ) : sprite(sprite), action(action), text(text)
{}

Tile::Tile(
    const sf::Sprite& sprite,
    const std::list<Button>& buttons,
    const std::list<sf::Text>& texts,
    const std::list<Tile>& tiles,
    bool isHidden
    ) : sprite(sprite), buttons(buttons),
    texts(texts), tiles(tiles), isHidden(isHidden)
{}

Scene::Scene(
        const sf::Sprite& sprite,
        std::list<Tile> tiles
    ) : sprite(sprite), tiles(tiles)
{}

void drawTile(sf::RenderWindow& window, const Tile& tile) {
    window.draw(tile.sprite);
    for (auto& text : tile.texts) {
        window.draw(text);
    }
    for (auto& button : tile.buttons) {
        window.draw(button.sprite);
    }
    for (auto& subTile : tile.tiles) {
        if (!subTile.isHidden) {
            drawTile(window, subTile);
        }
    }
}

// main draw function
void draw(sf::RenderWindow& window) {
    auto scene = *(GeneralProp::getPlayer()->getScene());
    
    window.draw(sf::Sprite(scene.sprite));
    for (auto& tile : scene.tiles) {
        if (!tile.isHidden) {
            drawTile(window, tile);
        } 
    }
}
