#include <iostream>

using namespace std;

string moveallx(string s)
{

    if (s.length() == 0)
    {
        /* code */
        return "";
    }

    char ch = s[0];

    string ans = moveallx(s.substr(1));

    if (ch == 'x')
    {
        /* code */
        return (ans + ch);
    }

    return (ch + ans);
}

int main()
{
    cout << moveallx("xxxxritikxxxx");

    return 0;
}