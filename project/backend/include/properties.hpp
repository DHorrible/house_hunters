#pragma once

#include "share.hpp"
#include "ui.hpp"

#include "SFML/Graphics.hpp"

#include <string>

class WinProp;
class GlobalProp;
class PlayerProp;

class WinProp {
private:
    size_t width;
    size_t height;
    size_t fps;
    std::string title;
public:
    size_t getWidth() const;
    size_t getHeight() const;
    size_t getFps() const;
    std::string getTitle() const;

    WinProp(
        size_t width = STD_WIN_WIDTH,
        size_t height = STD_WIN_HEIGHT,
        size_t fps = STD_WIN_FPS,
        const std::string& title = STD_WIN_TITLE
        );
};

class GeneralProp {
private:
    inline static PlayerProp* player = nullptr;

    GeneralProp();
public:
    static void setProp(
        PlayerProp* player
        );

    static PlayerProp* getPlayer();
};

class PlayerProp {
private:
    size_t amount;
    Scene* scene;
public:
    size_t getAmount() const;
    Scene* getScene() const; 

    PlayerProp(
        size_t amount = START_AMOUNT,
        Scene* scene = nullptr 
        );
};
