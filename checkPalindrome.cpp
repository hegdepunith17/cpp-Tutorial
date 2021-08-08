#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char a[n+1];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int check=1;
    for (int  i = 0; i < n; i++)
    {
        if (a[i]!=a[n-i-1])
        {
            check=0;
            break;
        }
        
    }
    if (check)
    {
       cout<<"Palindrome "<<endl;
    }
    else cout<<" Not a Palindrome "<<endl;
    
    
    return 0;
}