#include<iostream>

using namespace std;
int sum(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        /* code */
        sum = sum+i;
    }
    return sum;
    
}

int main()
{
    int n;
    cin>>n;

    int result = sum(n);
    cout<<result;
    return 0;
}