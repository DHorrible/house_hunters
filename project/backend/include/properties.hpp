#pragma once

#include <string>

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
        size_t width = 720,
        size_t height = 1080,
        size_t fps = 30,
        const std::string& title = "House hunters"
        );
};
