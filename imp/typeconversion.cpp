#include<iostream>
namespace first
{
    int num1 = 1;
    int num2 = 11;
}
namespace second
{
    int num1 = 2;
    int num2 = (double)10.00;
}
int main()
{
    std::cout << first::num1 << second::num2;
    return 0;
}