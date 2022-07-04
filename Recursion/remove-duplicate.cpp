#include <iostream>

using namespace std;

string duplicateremover(string s)
{

    if (s.length() == 0)
    {
        /* code */
        return "";
    }

    char ch = s[0];

    string ans = duplicateremover(s.substr(1));

    if (ch == ans[0])
    {
        /* code */
        return ans;
    }

    return (ch + ans);
}

int main()
{
    cout << duplicateremover("aaaabbbeeecddd");

    return 0;
}