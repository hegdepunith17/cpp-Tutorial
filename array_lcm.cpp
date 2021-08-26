#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a[])
{
    int ans = a[0];
    for (int i = 1; i < 5; i++)
    {
        ans = (a[i] * ans) / gcd(a[i], ans);
    }
    return ans;
}
int main()
{
    int a[5] = {2, 7, 3, 9, 4};

    cout << lcm(a);

    return 0;
}