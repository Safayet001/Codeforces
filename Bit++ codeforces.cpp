#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, counter = 0;
    string c;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        if (c == "X++" || c == "++X")
        {
            counter++;
        }
        else if (c == "--X" || c == "X--")
        {
            counter--;
        }
    }
    cout << counter;

    return 0;
}