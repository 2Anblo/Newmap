#include <iostream>
using namespace std;
#include"swap.h"
void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	cout << "a=" << a << endl;
	cout<<"b=" << b << endl;
}
int main()
{
	int a = 0; int b = 1;
	swap(a, b);
	system("pause");
	return 0;
}