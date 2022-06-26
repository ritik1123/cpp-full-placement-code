#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        /* code */
        freq[i] = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        /* code */
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (freq[i] > maxf)
        {
            /* code */
            maxf = freq[i];
            ans = i+'a';
        }
        
    }
    cout<<maxf << " "<< ans<<endl;
    
    
    
    return 0;
}