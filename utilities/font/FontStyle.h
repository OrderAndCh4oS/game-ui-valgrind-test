//
// Created by sarcoma on 6/21/19.
//

#ifndef GAME_UI_FONTSTYLE_H
#define GAME_UI_FONTSTYLE_H

#include <string>
#include "Font.h"
#include "../colour/Colour.h"

class FontStyle {
private:
    float x{0};
    float y{0};
    const char* font = nullptr;
    Colour colour;
    int size{16};
    int alignment{0};
    int lineHeight{19};
    int maxWidth{0};
protected:

    void draw(const char* text, float xOffset, float yOffset, Colour colour);

public:

    FontStyle(float x, float y, const char* font, int size, Colour colour);

    FontStyle(float x, float y, const char* font, int size, Colour colour, int alignment);

    FontStyle();

    void write(const char* text);

    void write(const char* text, float xOffset, float yOffset);

    void write(const char* text, Colour colour);

    void write(const char* text, float xOffset, float yOffset, Colour colour);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    const char* getFont();

    void setFont(const char* font);

    Colour getColour();

    void setColour(Colour colour);

    int getSize() const;

    void setSize(int size);

    int getAlignment() const;

    void setAlignment(int alignment);

    int getLineHeight() const;

    void setLineHeight(int lineHeight);

    int getMaxWidth() const;

    void setMaxWidth(int maxWidth);

};

#endif //GAME_UI_FONTSTYLE_H
