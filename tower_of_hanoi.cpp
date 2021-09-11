#include <iostream>
using namespace std;
void toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    toh(n - 1, A, B, C);
    cout << "Move " << n << " From " << A << " to " << B << endl;
    toh(n - 1, B, C, A);
}
int main()
{
    int n = 3;
    toh(n, 'A', 'B', 'C');

    return 0;
}