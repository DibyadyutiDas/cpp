#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Rectangle : public Shape {
public:
    void display() {
        cout << "This is a rectangle." << endl;
    }
};

// Derived class 2
class Circle : public Shape {
public:
    void display() {
        cout << "This is a circle." << endl;
    }
};

// Derived class 3
class Square : public Rectangle {
public:
    void display() {
        cout << "This is a square." << endl;
    }
};

// Derived class 4
class Cylinder : public Circle {
public:
    void display() {
        cout << "This is a cylinder." << endl;
    }
};

int main() {
    Shape shape;
    Rectangle rectangle;
    Circle circle;
    Square square;
    Cylinder cylinder;

    shape.display();
    rectangle.display();
    circle.display();
    square.display();
    cylinder.display();

    return 0;
}