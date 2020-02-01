#include <thread>

#include "properties.hpp"
#include "utility.hpp"
#include "ui.hpp"

#include "SFML/Graphics.hpp"

int main() {
    WinProp prop;

    sf::RenderWindow window(sf::VideoMode(prop.getHeight(), prop.getWidth()), prop.getTitle());

    window.setFramerateLimit(prop.getFps());

    while (window.isOpen()) {
        update();
        draw(window);

        window.clear();
        window.display();
    }

    return 0;
}
