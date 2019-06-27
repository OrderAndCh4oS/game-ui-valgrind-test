

#ifndef GAME_UI_COLOUR_H
#define GAME_UI_COLOUR_H

#include <stdexcept>
#include <iostream>

class Colour {
private:
    bool initialised{false};
    float r{1};
    float g{1};
    float b{1};
    float a{1};
public:
    Colour();
    Colour(unsigned char r, unsigned char g, unsigned char b);
    Colour(float r, float g, float b);
    Colour(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    Colour(float r, float g, float b, float a);

    bool isInitialised() const;

    explicit Colour(int hex);

    Colour(int hex, float a);

    void get();

    Colour* clone();

    Colour* clone(float a);
};

#endif //GAME_UI_COLOUR_H
