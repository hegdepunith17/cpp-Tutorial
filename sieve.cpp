#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 9;
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j=j+i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i<=n; i++)
    {
        if (isPrime[i])
        {
           cout << i << endl;
        }
        
        
    }

    return 0;
}