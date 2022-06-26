#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    int k;
    cin>>k;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag = false;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == k){
                cout<<i<<" "<<j<<endl;
                // cout<<"Element found"<<endl;
                flag = true;
            }
            
        }
    }

    if(flag){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found";
    }


    return 0;
}