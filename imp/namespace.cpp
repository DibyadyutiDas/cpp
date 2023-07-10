#include<iostream>

namespace first
{
    int x = 3;
}
namespace second
{
    int x = 4;
}

int main()
{
    using namespace first;
    int x = 5;
    std::cout << x;// << endl;
    std::cout << first::x;
    std::cout << second::x;
    return  0;
}
//Here endl function dont work without using namespace std
/*namespace first
{
    int x = 3;
} // namespace first*/