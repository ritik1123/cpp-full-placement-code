#include<iostream>

using namespace std;
int unique(int arr[],int n){
    int xorsum = 0;
    for (int  i = 0; i < n; i++)
    {
        /* code */
        xorsum = xorsum^arr[i];
        
    }
    return xorsum;
    
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    int ans = unique(arr,n);
    cout<<ans;
    
    
    return 0;
}