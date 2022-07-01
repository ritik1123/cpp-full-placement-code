#include <iostream>

using namespace std;
bool sorted(int n, int arr[])
{
    if (n == 1)
    {
        /* code */
        return 1;
    }

    bool restarr = sorted(n - 1, arr + 1);
    return (arr[0] < arr[1] && restarr);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    cout << sorted(5, arr) << endl;

    return 0;
}