#include<iostream>

using namespace std;

int main()
{
    int n,i,fact = 1;
    cin>>n;

    for(i = n;i>=1;i--){
        fact = fact*i;
        
    }
    cout<<fact<<endl;
    return 0;
}