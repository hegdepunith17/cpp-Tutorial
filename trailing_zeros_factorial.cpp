#include<iostream>
using namespace std;
int main()
{

    //Naive approach ;

    int n,res=0;
    cout<<"Enter the Number "<<endl;
    cin>>n;
    // int fact=1,  count=0;
    // for(int i=2;i<=n;i++)
    //     {
    //     fact=fact*i;
    //     }
    // cout<<"Factorial of a number "<<n<<" = "<<fact<<endl;
    // while(fact%10==0){
    //    count ++;
    //    fact=fact/10;
    // }
    // cout<<"The number of trailing zeros  = "<<count;



    //Optimised appraoch
    for(int i=5;i<=n;i*=5){
        res=res+n/i;
    }

    cout<<"The number of trailing zeros  = "<<res;
 return 0;
}