#include <stdio.h>
#include "rectangle.h"

int getPerimeter(int length, int width) {
    return 2 * (length + width);
}

int getArea(int length, int width) {
    return length * width;
}

int setLength(int input) {
    if (input >= 1 && input <= 99) {
        return input;
    }
    return 1; // Safeguard for invalid inputs
}

int setWidth(int input) {
    if (input >= 1 && input <= 99) {
        return input;
    }
    return 1; // Safeguard for invalid inputs
}