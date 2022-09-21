#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    int i, counter1 = 0, counter2 = 0;
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    for (i=0; i<str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);

    }
    if (str1 > str2)
    {
        cout << 1;
    }
    else if (str1 < str2)
    {
        cout << -1;
    }
    else {cout << 0;}
    return 0;
}
