#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 10 == 7 || i % 7 == 0 || i / 10 == 7)
			cout << "Hit the desk!" << endl;
		else cout << i << endl;
	}
	system("pause");
	return 0;
}