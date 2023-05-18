#ifndef UNTITLED17_RECTANGLE_H
#define UNTITLED17_RECTANGLE_H

using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int width, int height) : width(width), height(height) {
        width = width;
        width = height;
    }

    int GetWidth() const {
        return width;
    }

    int GetHeight() const {
        return height;
    }

    int GetArea() {
        return width * height;

    }

    int GetPerimeter() {
        return (width + height) * 2;
    }

};

#endif //UNTITLED17_RECTANGLE_H
