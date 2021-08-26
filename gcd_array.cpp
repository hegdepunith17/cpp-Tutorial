#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int gcd_arr(int a[]){
int ans=a[0];
for (int  i = 1; i < 5; i++)
{
    ans=gcd(a[i],ans);

}
return ans;


}
int main()
{
    int a[5]={2, 4, 6, 8, 16};
    cout<<gcd_arr(a);
 return 0;
}