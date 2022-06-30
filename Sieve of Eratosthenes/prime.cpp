#include <iostream>
using namespace std;
void prime(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (prime[i] == 0)
        {
            /* code */
            for (int j = i * i; j <= n; j += i)
            {
                /* code */
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (prime[i] == 0)
        {
            /* code */
            cout << i << " ";
        }
    }
}

using namespace std;

int main()
{
    int n;
    cin >> n;

    prime(n);
    return 0;
}