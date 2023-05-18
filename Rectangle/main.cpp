#include <iostream>

#include "Rectangle.h"

using namespace std;

void PrintRectangle(Rectangle *rectangle) {
    cout << "Ширина прямоугольника: " << rectangle->GetWidth() << endl;
    cout << "Высота прямоугольника: " << rectangle->GetHeight() << endl;
    cout << "Площадь прямоугольника: " << rectangle->GetArea() << endl;
    cout << "Периметр прямоугольника: " << rectangle->GetPerimeter() << endl;
}

Rectangle createRectangle() {
    int width, height;

    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    cout << "Введите высоту прямоугольника: ";
    cin >> height;

    return Rectangle(width, height);
}

int main() {
    system("chcp 65001");

    Rectangle rectangle(createRectangle());
    PrintRectangle(&rectangle);

    return 0;
}
