#include <iostream>
using namespace std;
#include<ctime>
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	cin >> i;
	while (i!=num)
	{
		if (i > num)
		{
			cout << "too big!" << endl;
		}
		if (i < num)
		{
			cout << "too small!" << endl;
		}
		cin >> i;
	}
	cout << "RIGHT!" << endl;
	return 0;
}