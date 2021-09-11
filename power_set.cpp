#include<iostream>
#include<cmath>


using namespace std;
int main()
{
    char str[] = {'a','b','c'};
   int n=3;
   int total_size=pow(2,n);
   for (int  i = 0; i < total_size; i++)

   {
       for (int  j = 0; j < n; j++)
       {
           if(i&(1<<j)) cout<<str[j];
       }
       cout<<endl;
   }
   
    
 return 0;
}