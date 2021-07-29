#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i = 0;
    int decimal = 0;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;

        decimal = (rem * pow(16, i)) + decimal;//16      8    
        n = n / 10;
        i++;
    }
    cout << decimal;

    return 0;
}