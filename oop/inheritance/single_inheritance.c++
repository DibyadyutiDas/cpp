#include <iostream>

// Base class
class Shape {
public:
    void display()
    {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void display()
    {
        std::cout << "This is a rectangle." << std::endl;
    }
};

int main()
{
    // Create an object of the derived class
    Rectangle rectangle;

    rectangle.display();

    rectangle.Shape::display();

    return 0;
}