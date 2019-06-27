//
// Created by sarcoma on 6/23/19.
//

#ifndef GAME_UI_IMAGE_H
#define GAME_UI_IMAGE_H

#include <allegro5/bitmap.h>
#include "../colour/Colour.h"

class Image {
private:
    const char* image{};
public:
    explicit Image(const char* image);

    void getImage() const;

};

#endif //GAME_UI_IMAGE_H
