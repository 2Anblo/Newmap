#include<iostream>
using namespace std;
#include <string>
int main()
{
	int n = 0;
	int a[10], b[10], t[10];
	int m = 0;
	bool flag;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
	{
		flag = true;
		for (int k = 0; k < n; k++)
		{
			if (i == t[k])
				flag = false;
		}
		if (flag)
		{
			b[m] = a[i];
			m++;
		}
		for (int j = i + 1; j < 10; j++)
		{
			if (a[j] == a[i])
			{
				t[n] = j;
				n++;
			}
		}
	}
	for (int i = 0; i < m; i++)
		cout << b[i] << endl;
	system("pause");
	return 0;
}
/*{
	int a1 = 10;
	int a2;
	cin >> a2;
	cout << a2 % a1 << endl;
	system("pause");
	return 0;
}*/