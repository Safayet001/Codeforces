#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int m=5, n=5, i, j, a, b, steps;
    int c[5][5];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    steps = abs(2-a)+abs(2-b);
    cout << steps;
    return 0;
}
