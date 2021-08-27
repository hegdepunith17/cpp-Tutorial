#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int >result;
    int n=15;

    for (int  i = 1; i*i <n; i++)
    {
        if(n%i==0){
        result.push_back(i);
        }
    }
    for (int j=sqrt(n); j>=1; j--)
    {
        if (n%j==0)
        {
            result.push_back(n/j);
        }
 }
 for (int  i = 0; i < result.size(); i++)
 {
     cout<<result.at(i)<<endl;
 }
 
    
    
 return 0;
}