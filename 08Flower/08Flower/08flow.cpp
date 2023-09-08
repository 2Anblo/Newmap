#include <iostream>
using namespace std;
int main()
{
	int a = 0; int b = 0; int c = 0;
	int num = 100;
	do {
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		if (a * a * a + b * b * b + c * c * c == num)
			cout << num << "is a flower number!" << endl;
		num++;

	} while (num < 1000);
	system("pause");
	return 0;
}