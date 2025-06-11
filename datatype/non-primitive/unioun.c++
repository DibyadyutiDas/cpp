#include <iostream>
#include <cstring>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    Data data;

    data.i = 10;
    std::cout << "data.i: " << data.i << std::endl;

    data.f = 3.14f;
    std::cout << "data.f: " << data.f << std::endl;

    std::strcpy(data.str, "Hello");
    std::cout << "data.str: " << data.str << std::endl;

    return 0;
}
