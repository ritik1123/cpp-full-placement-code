#include<iostream>

using namespace std;
bool pairsum(int arr[],int n,int key){
    int low = 0;
    int high  = n-1;
    for (int i = low; i < high; i++)
    {
        /* code */
        if (arr[low] + arr[high] == key)
        {
            /* code */
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high] > key)
        {
            /* code */
            high--;
        }
        else
        {
            low++;
        }
        
        
        
        
    }
    return false;
    
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

    cout<<pairsum(arr,n,key)<<endl;
    return 0;
}