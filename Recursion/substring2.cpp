#include <iostream>
#include <string.h>

using namespace std;
void substring2(string s, string ans)
{

    if (s.length() == 0)
    {
        /* code */
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;

    string ros = s.substr(1);
    substring2(ros, ans);
    substring2(ros, ans + ch);
    substring2(ros, ans + to_string(code));
}

int main()
{
    substring2("AB", "");
    return 0;
}