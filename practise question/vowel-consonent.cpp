#include<iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    char lowercase = (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u');
    char uppercase = (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U');

    if(lowercase || uppercase){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}