#include<iostream>

using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        fact = fact*i;
    }
    return fact;
    
}

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}