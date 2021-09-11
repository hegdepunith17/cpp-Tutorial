#include <iostream>
using namespace std;
//---------------->O(n)---> TIME ,O(2N)-->Space 
void rainwatertrapping(int a[], int n)
{
    int left[n];
    int right[n];
    right[n-1] = a[n - 1];
    left [0]= a[0];
    int trapped_water = 0;
    for (int  i = 1; i < n; i++)
    {
        left[i]=max(left[i-1],a[i]);
    }
       for (int  i = n-2; i >= 0; i--)
    {
        right[i]=max(right[i+1],a[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        trapped_water=trapped_water+min(left[i],right[i])-a[i];
    }
    cout<<trapped_water<<endl;
}
int main()
{
    int a[8]={3,1,2,4,0,1,3,2};
    int n=8;
    rainwatertrapping(a,n);
    return 0;
}