#include <iostream>
#include <string>

// Define a struct named "Person"
struct Person {
    std::string name;
    int age;
    float height;
};

int main()
{
    // Declare a variable of type "Person"
    Person person1;

    // Assign values to the struct members
    person1.name = "Dibya";
    person1.age = 20;
    person1.height = 5.10f;

    // Print the values of the struct members
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << std::endl;

    return 0;
}