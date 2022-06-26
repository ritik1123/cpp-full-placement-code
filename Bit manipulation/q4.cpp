#include<iostream>

using namespace std;
int subset(int arr[],int n){
    for (int i = 0; i < (1<<n); i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (i & (1 << j))
            {
                /* code */
                cout<<arr[j]<<" ";
            }
            
        }cout<<endl;
        
    }
    return arr[n];
    
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    subset(arr,n);
    
    
    
    return 0;
}