//
// Created by sarcoma on 6/23/19.
//

#include <allegro5/allegro.h>
#include "Image.h"
#include "../../exceptions/InitError.h"
#include "../colour/Colour.h"

Image::Image(const char* image)
{
    this->image = image;
}

void Image::getImage() const
{
    std::cout << image;
}

