#include <iostream>
#include <string>
using namespace std;
void leap_year(int y);

int main()
{
	int y = -1;
	string input;

	cout << "Input year: " << endl;
	cin >> input;

	try
	{
		y = stoi(input.c_str());
		leap_year(y);
	}
	catch (...)
	{
		cout << "Error" << endl;
	}

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