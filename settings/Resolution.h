
#ifndef GAME_UI_RESOLUTION_H
#define GAME_UI_RESOLUTION_H

#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

// Todo: Implement resolution independence https://wiki.allegro.cc/index.php?title=Achieving_Resolution_Independence

class Resolution {
private:
    int width{0};
    int height{0};
    bool fullScreen{false};
public:
    Resolution();

    explicit Resolution(bool isFullScreen);

    Resolution(int width, int height);

    Resolution(int width, int height, bool isFullScreen);
    int getWidth();
    int getHeight();

    bool isFullScreen() const;

    void setFullScreen(bool isFullScreen);
};

#endif //GAME_UI_RESOLUTION_H
