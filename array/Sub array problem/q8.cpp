#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int maxsum = INT_MIN;

    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum += a[k];
                // cout<<a[k];

            }//cout<<endl;
            maxsum = max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
}