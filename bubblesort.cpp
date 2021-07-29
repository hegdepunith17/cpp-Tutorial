#include <iostream>
using namespace std;
int main()
{

    cout << "Enter a size of an array " << endl;
    int n;
    cin >> n;
    int arr[n];
    int pass = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (pass != n)//toatal number of pass
    {
        for (int i = 0; i < n - pass; i++)//for single time

        {
            if (arr[i + 1] < arr[i])

            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }

        //for one pass
        pass++;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}
