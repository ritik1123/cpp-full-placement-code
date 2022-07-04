#include <iostream>

using namespace std;

int countpath(int s, int e)
{
    if (s == e)
    {
        /* code */
        return 1;
    }
    if (s > e)
    {
        /* code */
        return 0;
    }
    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        /* code */
        count += countpath(s + i, e);
    }

    return count;
}

int main()
{
    cout << countpath(0, 3) << endl;

    return 0;
}