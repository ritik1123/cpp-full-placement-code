#include<iostream>

using namespace std;
int noofones(int n){
    int count = 0;
    while (n)
    {
        /* code */
        n = n & (n & n-1);
        count++;
    }
    return count;
    
}

int main()
{
    cout<<noofones(19)<<endl;
    return 0;
}