#include<iostream>

using namespace std;

int binarysearch(int n,int arr[],int key){
    int s = 0;
    int e = n;

    while (s<=e)
    {
        /* code */
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key)
        {
            /* code */
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        
        
    }
    return -1;
    
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarysearch(n,arr,key)<<endl;
    return 0;
}