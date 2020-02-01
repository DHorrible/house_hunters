#pragma once

#include "SFML/Graphics.hpp"

class Action {
private:
    void (*fun)();
public:
    void Invoke();

    Action(void (*fun)());
};



void update();
