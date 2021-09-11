#include<iostream>
using namespace std;
void frequency(int a[],int n ){
    int freq=1;
    int i=1;
    while (i<n)
    {
        while (i<n && a[i-1]==a[i])
        {
           freq++;
           i++;

        }
        cout<<a[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;

        
        
    }
    if (n==1||a[n-1]!=a[n-2])
    {
      cout<<a[n-1]<<" "<<"1"<<endl;
    }
    
    
}
int main()
{
    int a[6]={10,10,10,25,30,30};
    frequency(a,6);
 return 0;
}