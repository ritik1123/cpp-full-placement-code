#include<iostream>

using namespace std;

int fillingtiles(int n){
    if (n == 1)
    {
        /* code */
        return 1;
    }
    if (n == 0)
    {
        /* code */
        return 0;
    }

    return fillingtiles(n-1) + fillingtiles(n-2);
    
    
}



int main()
{
    cout<<fillingtiles(4)<<endl;
    return 0;
}