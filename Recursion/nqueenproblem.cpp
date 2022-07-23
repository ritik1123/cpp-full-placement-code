#include <iostream>

using namespace std;
bool issafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        /* code */
        if (arr[row][y] == 1)
        {
            /* code */
            return false;
        }
    }

    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        /* code */
        if (arr[row][col] == 1)
        {
            /* code */
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;

    while (row >= 0 && col < n)
    {
        /* code */
        if (arr[row][col] == 1)
        {
            /* code */
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nqueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        /* code */
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        /* code */
        if (issafe(arr, x, col, n))
        {
            /* code */
            arr[x][col] = 1;
            if (nqueen(arr, x + 1, n))
            {
                /* code */
                return true;
            }
            arr[x][col] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = new int[n];
        for (int j = 0; j < n; i++)
        {
            /* code */
            arr[i][j] = 0;
        }
    }
    if (nqueen(arr, 0, n))
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                /* code */
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}