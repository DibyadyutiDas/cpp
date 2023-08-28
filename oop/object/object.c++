#include <iostream>

class Object {
public:
    void printMessage() {
        std::cout << "Hello, I am an object!" << std::endl;
    }
};

int main()
{
    Object obj;
    obj.printMessage();

    return 0;
}