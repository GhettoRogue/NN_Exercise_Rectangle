#include <iostream>

#include "Rectangle.h"

using namespace std;

void PrintRectangle(Rectangle *rectangle) {
    cout << "��ਭ� ��אַ㣮�쭨��: " << rectangle->GetWidth() << endl;
    cout << "���� ��אַ㣮�쭨��: " << rectangle->GetHeight() << endl;
    cout << "���頤� ��אַ㣮�쭨��: " << rectangle->GetArea() << endl;
    cout << "��ਬ��� ��אַ㣮�쭨��: " << rectangle->GetPerimeter() << endl;
}

Rectangle createRectangle() {
    int width, height;

    cout << "������ �ਭ� ��אַ㣮�쭨��: ";
    cin >> width;

    cout << "������ ����� ��אַ㣮�쭨��: ";
    cin >> height;

    return Rectangle(width, height);
}

int main() {
    system("chcp 65001");

    Rectangle rectangle(createRectangle());
    PrintRectangle(&rectangle);

    return 0;
}
