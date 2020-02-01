#include <thread>

#include "properties.hpp"
#include "utility.hpp"
#include "ui.hpp"

#include "SFML/Graphics.hpp"

int main() {
    WinProp prop;

    GeneralProp::setProp();

    sf::RenderWindow window(sf::VideoMode(prop.getWidth(), prop.getHeight()), prop.getTitle());

    window.setFramerateLimit(prop.getFps());

    while (window.isOpen()) {
        update();

        window.clear();
        draw(window);
        window.display();
    }

    return 0;
}
