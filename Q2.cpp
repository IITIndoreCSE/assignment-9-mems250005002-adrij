#include <iostream>
using namespace std;

// Define the Color structure
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 Color structures with sample RGB values
    Color colors[5] = {
        {100, 150, 200},  // RGB values for color 1
        {50, 200, 255},   // RGB values for color 2
        {255, 100, 50},   // RGB values for color 3
        {0, 0, 0},        // RGB values for color 4
        {255, 255, 255}   // RGB values for color 5
    };

    // Invert the color values of the first 3 elements in the array
    for (int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the new RGB values for all 5 elements
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i + 1 << " -> RGB(" 
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")" << endl;
    }

    return 0;
}

