#include <iostream>
#include <string>
using namespace std;
void leap_year(int y);
int main()
{
	int y = -1, j = 0;
	string input;
	char tmp[10];

	do
	{
		cout << "Input year: " << endl;
		cin >> input;
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= '0' && input[i] <= '9')
			{
				tmp[j] = input[i];
				j++;
			}
		}
		if (j != 0)
			y = atoi(tmp);
	} while (y == -1);

	leap_year(y);

	return 0;
}

void leap_year(int y)
{
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
			{
				cout << "leap" << endl;
			}
			else
				cout << "not leap" << endl;
		}
		else
			cout << "leap" << endl;
	}
	else
		cout << "not leap" << endl;
}