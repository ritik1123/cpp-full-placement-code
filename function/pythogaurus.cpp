#include<iostream>
#include<math.h>

using namespace std;
bool check(int x,int y,int z){
    int a = max(x , max(y,z));
    int b,c;
    if (a == x)
    {
        /* code */
        b = y;
        c = z;
    }
    else if (a == y)
    {
        /* code */
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (pow(a,2) == pow(b,2)+pow(c,2)){
        return true;
    }
    else
    {
        return false;
    }
    
    
    
    
    
    

}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythogaurus triplet";
    }
    else{
        cout<<"Not Pythogaurus triplet";
    }
    return 0;
}