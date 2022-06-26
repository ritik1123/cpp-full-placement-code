#include<iostream>

using namespace std;
int linearsearch(int n,int arr[],int key){
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == key)
        {
            /* code */
            return i;
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

    cout<<linearsearch(n,arr,key)<<endl;
    
    return 0;
}