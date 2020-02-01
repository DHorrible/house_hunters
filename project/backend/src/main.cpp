#include <thread>

#include "properties.hpp"
#include "utility.hpp"
#include "ui.hpp"

#include "SFML/Graphics.hpp"

int main() {
    WinProp prop;
    Scene scene;
    PlayerProp player(START_AMOUNT, &scene);
    GeneralProp::setProp(&player);

    sf::RenderWindow window(sf::VideoMode(prop.getWidth(), prop.getHeight()), prop.getTitle());

    window.setFramerateLimit(prop.getFps());

    while (window.isOpen()) {
        update();

        window.clear(sf::Color(sf::Color::White));
        draw(window);
        window.display();
    }

    return 0;
}
