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

    int current[n+1];
    current[0]  = 0;

    for(int i = 1;i<n;i++){
        current[i] = current[i-1]+a[i-1];
    }

    int maxsum = INT_MIN;

    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += a[j];
            maxsum = max(maxsum,sum);
        }
    }

    cout<<maxsum<<endl;

    return 0;
}