#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string s = "bcdef";

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i]>= 'a' && s[i]<= 'z'){
            s[i] -= 32;
        }
        
        
    }
    cout<< s<<endl;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i] >= 'A' && s[i] <= 'Z' )
        {
            /* code */
            s[i] += 32;
        }
        
    }
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;



    
    

    return 0;
}