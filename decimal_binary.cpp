#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number ";
    cin >> num;
    int i = 0, rem;
    int a[10];

    while (num != 0)//
    {
        rem = num % 2;   //10 rem=0
        num = num / 2;//5
        a[i] = rem;
        i++;
    }

for (int j = i-1; j >=0; j--)
{
   cout<<a[j]<<" ";
}

    return 0;
}