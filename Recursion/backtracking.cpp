#include<iostream>

using namespace std;
bool issafe(int** arr,int x,int y,int n){
    if (x<n && y<n && arr[x][y] == 1){
        return 1;
    }
    return false;
    
}
bool ratmaze(int** arr,int x,int y,int n,int** sol){
    if((x == (n-1)) && (y == (n-1))){
        sol[x][y] = 1;
        return true;
    }
    if (issafe(arr,x,y,n))
    {
        sol[x][y] = 1;
        /* code */
        if (ratmaze(arr,(x+1),y,n,sol))
        {
            /* code */
            
            return true;
        }
        if (ratmaze(arr,x,(y+1),n, sol))
        {
            /* code */
           
            return true;
        }
        
        sol[x][y] = 0;
        return false;
        
    }
    return false;
    
}



int main()
{
    int n;
    cin>>n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }

    int** sol = new int*[n];
    for(int i = 0;i<n;i++){
        sol[i] = new int [n];
        for (int j = 0; j < n; j++)
        {
            /* code */
            sol[i][j] = 0;

        }
        
    }
    cout<<endl;
    if (ratmaze(arr,0,0,n,sol))
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                /* code */
                cout<<sol[i][j]<<" ";
            }cout<<endl;
            
        }
        
    }
    
    
    

    
    return 0;
}