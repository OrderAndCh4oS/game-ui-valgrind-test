
#include "Colour.h"

Colour::Colour() = default;

Colour::Colour(unsigned char r, unsigned char g, unsigned char b)
{
    initialised = true;
    this->r = (float) r/255;
    this->g = (float) g/255;
    this->b = (float) b/255;
    a = 255;
}

Colour::Colour(float r, float g, float b)
{
    initialised = true;

    if (r>1 || r<0 || g>1 || g<0 || b>1 || b<0) {
        throw std::invalid_argument("Float value Colour must be in range 0 to 1");
    }
    this->r = r;
    this->g = g;
    this->b = b;
    a = 255;
}

Colour::Colour(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
        :Colour(r, g, b)
{
    this->a = (float) a/255;
}

Colour::Colour(float r, float g, float b, float a)
        :Colour(r, g, b)
{
    if (a>1 || a<0) {
        throw std::invalid_argument("Float value Colour must be in range 0 to 1");
    }
    this->a = a;
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-signed-bitwise"

/**
 * Note: Found here: https://stackoverflow.com/a/3723973/2562137
 * @param hex
 */
Colour::Colour(int hex)
{
    initialised = true;
    r = (hex >> 16 & 0xFF)/255.0;  // Extract the RR byte
    g = (hex >> 8 & 0xFF)/255.0;   // Extract the GG byte
    b = (hex & 0xFF)/255.0;        // Extract the BB byte
    a = 1;
}

#pragma clang diagnostic pop

Colour::Colour(int hex, float a)
        :Colour(hex)
{
    this->a = a;
}

bool Colour::isInitialised() const
{
    return initialised;
}

void Colour::get()
{
    std::cout << r << g << b << std::endl;
}

Colour* Colour::clone()
{
    return new Colour(r, g, b, a);
}

Colour* Colour::clone(float a)
{
    return new Colour(r, g, b, a);
}
