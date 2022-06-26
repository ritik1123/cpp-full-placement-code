#include<iostream>

using namespace std;

int getbit(int n,int position){
    return (n & (1 << position) != 0);
}
int setbit(int n,int position){
    return n | (1 << position) ;
}
int clearbit(int n,int position){
    int mask = ~(1 << position);
    return(n & mask);
}
int updatebit(int n,int position,int value){
    int mask = ~(1 << position);
    n = n & mask;
    return (n | (value << position));
}

int main()
{
    // cout<<getbit(5,2)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,0);
    return 0;
}