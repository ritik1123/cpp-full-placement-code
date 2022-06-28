#include<iostream>

using namespace std;

bool getbit(int n,int pos){
    return ((n & (1<<pos))!= 0);
}

int setBit(int n,int pos){
    return (n | (1<<pos));
}

int unique(int arr[],int n){
    int result  = 0;

    for (int i = 0; i < 64; i++)
    {
        /* code */
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (getbit(arr[j],i))
            {
                /* code */
                sum++;
            }
            
        }
        if (sum % 3 != 0)
        {
            /* code */
            result = setBit(result,i);
        }
        
        
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int result = unique(arr,n);
    cout<<result;
    return 0;
}