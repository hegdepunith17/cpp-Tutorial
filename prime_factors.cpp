#include<iostream>
using namespace std;
// bool isPrime(int n){
//      if (n<=1) return false;
//      for (int  i = 2; i *i<= n; i++)
//      {
//          if (n%i==0) return false;
//      }
//      return true ;
// }
void primefact(int n){
    if (n<=1) return ;
    if (n%2==0)
    {
       cout<<2<<endl;
       n=n/2;
    }
     if (n%3==0)
    {
       cout<<3<<endl;
       n=n/3;
    }
    
    
    for (int  i = 5; i*i <= n; i+6)
    {
        while (n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
        while (n%(i+2)==0)
        {
            cout<<i+2<<endl;
            n=n/(i+2);
        }
        
    }
    if (n>3)
    {
       cout<<n<<endl;
    }
    
    
}
int main()
{
int n=450;
primefact(n);
 return 0;
}