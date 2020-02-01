#include "properties.hpp"

WinProp::WinProp(
    size_t width,
    size_t height,
    size_t fps,
    const std::string& title
    ) : width(width), height(height), fps(fps), title(title)
{}

size_t WinProp::getWidth() const {
    return this->width;
}

size_t WinProp::getHeight() const {
    return this->height;
}

size_t WinProp::getFps() const {
    return this->fps;
}

std::string WinProp::getTitle() const {
    return this->title;
}

