#include <iostream>

using namespace std;
void towerofhanoi(int n, char src, char dest, char helper)
{

    if (n == 0)
    {
        /* code */
        return;
    }

    towerofhanoi(n - 1, src, helper, dest);
    cout << "Moving from " << src << " to " << dest << endl;
    towerofhanoi(n - 1, helper, dest, src);
}

int main()
{
    towerofhanoi(4, 'A', 'C', 'B');
    return 0;
}