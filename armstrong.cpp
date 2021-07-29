#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=num;
    int sum=0;
    while (num>0)
    {
        int rem=num%10;
        sum=pow(rem,3)+sum;
        num=num/10;
    }
    if (sum==temp)
    {
        cout<<"Armstrong";

    }
    else
    {
        cout<<"Not a Armstrong ";

    }
    
    return 0;

}