#include <iostream>

using namespace std;
void primefactorisation(int n)
{
    int primefactorisation[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        /* code */
        primefactorisation[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (primefactorisation[i] == i)
        {
            /* code */
            for (int j = i * i; j <= n; j += i)
            {
                /* code */
                if (primefactorisation[j] == j)
                {
                    /* code */
                    primefactorisation[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        /* code */
        cout << primefactorisation[n] << endl;
        n = n / primefactorisation[n];
    }
}

int main()
{
    int n;
    cin >> n;

    primefactorisation(n);
    return 0;
}