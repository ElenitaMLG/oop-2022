#include "canvas.h"
#include <string.h>

Canvas::Canvas(int lines, int columns) {
    this->lines = lines;
    this->colums = colums;
    memset(poza, ' ', sizeof(poza));
}

void Canvas::set_pixel(int x, int y, char value) {
}

void Canvas::set_pixels(int count, ...) {
}

void Canvas::clear() {
}

void Canvas::print() const {
}
