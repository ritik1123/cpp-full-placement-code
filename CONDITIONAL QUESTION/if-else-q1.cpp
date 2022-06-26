#include<iostream>

using namespace std;
int max_of_three(int a,int b,int c){
    int greater;
    if(a>b && a>c){
        greater = a;
    }
    else if(b>a && b>c){
        greater = b;
    }
    else{
        greater  = c;
    }
    return greater;

}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int result = max_of_three(a,b,c);
    cout<<result;
    

    return 0;
}