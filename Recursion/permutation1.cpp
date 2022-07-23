#include<iostream>

using namespace std;
void permute(int arr[],int idx,int n){
    if (idx == n-1)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }cout<<endl;
        return;
    }
    for (int i = idx; i < n; i++)
    {
        /* code */
        swap(arr[i],arr[idx]);
        permute(arr,idx+1,n);
        swap(arr[idx],arr[i]);
    }
    return;
    

    
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
    permute(arr,0,n);
    
    
    return 0;
}