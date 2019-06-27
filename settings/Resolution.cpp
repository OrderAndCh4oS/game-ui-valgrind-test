
#include "Resolution.h"

Resolution::Resolution() = default;

Resolution::Resolution(int width, int height)
        :Resolution()
{
    this->width = width;
    this->height = height;
}

Resolution::Resolution(bool isFullScreen)
        :Resolution()
{
    this->fullScreen = isFullScreen;
}

Resolution::Resolution(int width, int height, bool isFullScreen)
        :Resolution(width, height)
{
    this->fullScreen = isFullScreen;
}

int Resolution::getWidth()
{
    return this->width;
}

int Resolution::getHeight()
{
    return this->height;
}

bool Resolution::isFullScreen() const
{
    return fullScreen;
}

void Resolution::setFullScreen(bool isFullScreen)
{
    Resolution::fullScreen = isFullScreen;
}

