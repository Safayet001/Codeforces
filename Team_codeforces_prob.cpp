#include<iostream>
#include<string>
using namespace std;
int main()
{
	char c;
	int n, i, j;
	int counter = 0;
	int g = 0;
	cin >> n >> endl;
	for(i=0; i<n; i++)
	{
		for(j=0; j<3; j++)
		{
			cin >> c;
			if (c =='1')
			{
				g++;
			}
		}
		if (g>1)
			{
				counter++;
				g = 0;
			}
			else
				{g = 0;}
			
	} 
	cout << counter;
	return 0;
}