#include <iostream>

using namespace std;
int hcf(int a, int b)
{

    int rem;
    while (b != 0)
    {
        /* code */
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int result = hcf(a, b);
    cout << result;

    return 0;
}