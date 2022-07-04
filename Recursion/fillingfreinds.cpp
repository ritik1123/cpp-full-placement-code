#include<iostream>

using namespace std;

int fillingfreinds(int n){
    
    if (n == 0 || n == 1 || n == 2)
    {
        /* code */
        return n;
    }

    return fillingfreinds(n-1) + fillingfreinds(n-2)*(n-1);
    
    
}



int main()
{
    cout<<fillingfreinds(4)<<endl;
    
    return 0;
}