#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double  num = 1;
    int num1 = 2;
    int num2 = 3;
    int res;
    
    res = max(num1,num2);
    cout << res << endl;

    res = min(num1,num2);
    cout << res << endl;
    
    res = pow(2,3);
    cout << res << endl;
    
    res = sqrt(9);
    cout << res << endl;
    
    res = abs(num);
    cout << res << endl;

    res  = ceil(num);
    cout << res << endl;

    res = floor(num);
    cout << res << endl;

    return 0;
}