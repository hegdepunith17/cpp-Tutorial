#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int key;
    cout << "enter key;";
    cin >> key;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << "key found"
                     << "at   " << i;
                exit(0);
            }
        }
    }
    if (i > n)
    {
        cout << "key not found";
    }

    return 0;
}