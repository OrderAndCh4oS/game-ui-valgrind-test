#include "main.h"
#include "initialisers/InitConstants.h"
#include "settings/Resolution.h"
#include "utilities/font/Font.h"
#include "utilities/font/FontStyle.h"
#include "utilities/image/Image.h"
#include "utilities/image/ImageCollection.h"
#include "utilities/primitives/Rect.h"
#include "utilities/user-interface/Panel.h"

int main()
{
    InitConstants::colour();

    gColour->white->get();

    auto* resolution = new Resolution(640, 480);

    std::cout << resolution->getHeight() << std::endl;
    std::cout << resolution->getWidth() << std::endl;

    Font::get("hello.png", 1);

    auto* fontStyle = new FontStyle(10, 14, "afont.ttf", 50, *gColour->white);

    fontStyle->write("hi");

    auto* image = new Image("star.png");
    auto* imageTwo = new Image("square.png");
    auto* imageCollection = new ImageCollection();
    imageCollection->add(image);
    imageCollection->add(imageTwo);

    Rect::drawFillWithBorderOutside(50, 514, 1512, 124, *gColour->lightBlue, *gColour->midBlue, 1);

    auto* panelOne = new Panel(124, 113, 500, 1400, *gColour->dustyBlack);
    auto* panelTwo = new Panel(10, 15, 10, 20, *gColour->white);
    auto* panelThree = new Panel(10, 15, 10, 20, *gColour->midBlue);

    panelOne->add(panelTwo);
    panelOne->add(panelThree);
    panelOne->draw();

    exit(0);
}