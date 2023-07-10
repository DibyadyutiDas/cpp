#include<iostream>
//using namespace std;
int main()
{
    std::string name;         //string name 
    int age;
    
    //std::cout << "What is your name -";
    //std::getline(std::cin ,name);                                       run

    std::cout << "What is your name -";
    std::getline(std::cin >> std::ws ,name);

    std::cout  << "What is your age -";
    std::cin >> age;           //std::getline(std::cin,age);

    //std::cout << "What is your name -";
    //std::getline(std::cin ,name);                                         error

    //std::cout << "What is your name -";
    //std::getline(std::cin >> std::ws ,name);                        run

    std::cout << "Hello " << name << std::endl ;
    std::cout << "You are " << age << " year old";
    return 0;
}