#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    //      a=10  b=5
    //      a>b
    //      a=5    ,  b=5;
    //      so ans = 5
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
            b = b - a;
    }
    cout << a;
    return 0;
}