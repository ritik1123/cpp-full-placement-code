#include<iostream>

using namespace std;
int maximum(int a,int b,int c){
    int greater;
    if (a>b && a>c)
    {
        /* code */
        greater = a;
    }
    else if (b>a && b>c)
    {
        /* code */
        greater = b;
    }
    else
    {
        /* code */
        greater = c;
    }
    return greater;
    
}
int minimum(int a,int b,int c){
    int smaller;
    if (a<b && a<c)
    {
        /* code */
        smaller = a;
    }
    else if (b<a && b<c)
    {
        /* code */
        smaller = b;
    }
    else
    {
        /* code */
        smaller = c;
    }
    return smaller;
    
}



int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int result1 = maximum(a,b,c);
    cout<<result1<<endl;

    int result2 = minimum(a,b,c);
    cout<<result2<<endl;
    
    return 0;
}