#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
    int x, y, z;
    x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {

        y = a;
        z = c;
    }
    else if (x == c)
    {

        y = a;
        z = b;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "Pythogoriean Triplet";
    }
    else
    {
        cout << "Not a Pythogorian Triplet";
    }

    return 0;
}