#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    void setName(const std::string& newName)
    {
        name = newName;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }

    std::string getName() const 
    {
        return name;
    }

    int getAge() const 
    {
        return age;
    }
};

int main()
{
    Person person;
    person.setName("Dibyadyuti");
    person.setAge(25);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    return 0;
}