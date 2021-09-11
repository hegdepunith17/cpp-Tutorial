#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxSum = a[0];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum;

    return 0;
}