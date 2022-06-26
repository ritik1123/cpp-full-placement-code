#include<iostream>
#include<climits>

using namespace std;
int kedane(int n,int a[]){
    int currentsum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        /* code */
        currentsum += a[i];
        if (currentsum <0)
        {
            /* code */
            currentsum = 0;
        }
        maxSum = max(maxSum,currentsum);
    }
    return maxSum;
    
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kedane(n,a);
    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kedane(n,a);

    cout<<max(wrapsum,nonwrapsum)<<endl;
    

    return 0;
}