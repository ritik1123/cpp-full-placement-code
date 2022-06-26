#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i = 0;
    int currentlen = 0, maxlen = 0;
    int st = 0,maxst = 0;

    while(true){
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            /* code */
            if (currentlen >maxlen)
            {
                /* code */
                maxlen = currentlen;
                maxst = st;
            }
            currentlen = 0;
            st = i+1;
            
        }
        
        else
        currentlen++;
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxlen<<endl;

    for (int i = 0; i < maxlen; i++)
    {
        /* code */
        cout<<arr[i+maxst];
    }
    
    return 0;
}