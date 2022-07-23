#include<iostream>

using namespace std;
int merge(int arr[],int l,int mid,int r){
    int inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];


    for (int i = 0; i < n1; i++)
    {
        /* code */
        a[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        b[i] = arr[mid+i+1];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i<n1 && j<n2)
    {
        /* code */
        if (a[i]<b[j])
        {
            /* code */
            a[k] = a[i];
            k++,i++;
        }
        else{
            a[k] = b[j];
            inv = n1-i;
            k++,j++;
        }
        
    }
    while (i<n1)
    {
        /* code */
        a[k] = a[i];
        k++,i++;
    }
    while (j<n2)
    {
        /* code */
        a[k] = b[j];
        k++,j++;
    }
    return inv;
    
    
    
    
    
}
int mergesort(int arr[],int l,int r){
    int inv = 0;
    while (l<r)
    {
        /* code */
        int mid = (l+r)/2;
        inv+=mergesort(arr,l,mid);
        inv+=mergesort(arr,mid+1,r);

        inv+=merge(arr,l,mid,r);
    }
    return inv;
    
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
    cout<<mergesort(arr,0,n);
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    
    

    
    return 0;
}