#include <iostream>
using namespace std;
int main()
{

    int arows, acolm, brows, bclom;
    cin >> arows >> acolm;
    cin >> brows >> bclom;
    int a[arows][acolm];
    int b[brows][bclom];
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolm; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < brows; i++)
    {
        for (int j = 0; j < bclom; j++)
        {
            cin >> b[i][j];
        }
    }
    int resultant[arows][bclom];
    int sum = 0;

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bclom; j++)
        {
            for (int k = 0; k < acolm; k++)
            {
                sum += a[i][k] * b[k][i];
            }

            resultant[i][j] = sum;
            sum=0;
        }
        

    }

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bclom; j++)
        {
            cout << resultant[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}