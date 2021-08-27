#include<iostream>
using namespace std;
bool isPrime(int n){
  if(n<=1) return false;
  if (n==2 ||n==3) return true;//to handle 2 and 3
  if (n%2==0 ||n%3==0) return false;// to handle 2 multiple and 3 
for (int  i = 5; i*i <= n; i+6)
{
    if ((n%i==0)||(n%(i+2)==0)) return false;
  
}
return true;
 
  

}
int main()
{

    int n=13;
    for (int  i = 2; i <=n; i++)
    {
        if(isPrime(i)){
            cout<<i<<endl;
            
            }
    }
    

 return 0;
}