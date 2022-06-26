#include <iostream>
#include <string.h>

using namespace std;
int binarytodecimal(int n)
{
    int x = 1;
    int ans = 0;

    while (n > 0)
    {
        /* code */
        int y = n % 10; // 1//0//1
        ans += x * y;   // 1+0+4
        x *= 2;         // x = 4//8
        n = n / 10;     // 10//1 //0
    }
    return ans; // 5
}
int octaltodecimal(int n)
{
    int x = 1;
    int ans = 0;

    while (n > 0)
    {
        /* code */
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n = n / 10;
    }
    return ans;
}
int hexatodecimal(string n)
{
    int x = 1;
    int ans = 0;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        /* code */
        if (n[i] >= '0' && n[i] <= '9')
        {
            /* code */
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            /* code */
            ans += x * ((n[i] - 'A') + 10);
        }
        x *= 16;
    }

    return ans;
}
int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {

        int lastDigit = n / x;
        n = lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int main()
{
    int s;
    cin >> s; // 101

    cout << decimalToBinary(s) << endl;
    return 0;
}