#include<iostream>

using namespace std;
int setBit(int n,int pos){
    return ((n &  (1<<pos)) != 0);
}

int xorsum(int arr[],int n){
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        /* code */
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxorsum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (setBit(arr[i],pos - 1))
        {
            /* code */
            newxorsum = newxorsum^arr[i];
        }
        
    }
    cout<<newxorsum<<endl;
    cout<<(tempxor^newxorsum)<<endl;

    
    return arr[n];
    
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    xorsum(arr,n);
    return 0;
}