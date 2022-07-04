#include <iostream>

using namespace std;

int countpath2(int n, int i, int j)
{
    if (i == n - 1 && j == n-1)
    {
        /* code */
        return 1;
    }
    if (i >= n || j >= n)
    {
        /* code */
        return 0;
    }
    return countpath2(n, i + 1, j) + countpath2(n, i, j + 1);
}

int main()
{
    cout << countpath2(3,0,0)<<endl;

    return 0;
}