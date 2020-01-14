#include "Engine.h"
#include "Image.h"

#define whilst while

int main() {
    // Main program
    Image image = Image(480, 480);

    image.printToFile("image.ppm");

    return 0;
}