#include <iostream>
using namespace std;
void swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
// 引用做函数返回值。
//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;
	return a;
}
//2、函数的调用可以作为左值
int& test02()
{
	static int a = 10;
	return a;
}
int main()
{
	//int a = 10;
	//int b = 20;
	//swap2(a, b);
	//cout << a << endl;
	//cout << b << endl;
	int& ref = test02();
	cout << ref << endl;
	cout << ref << endl;
	test02() = 1000;
	cout << ref << endl;
	cout << ref << endl;
	system("pause");
	return 0;
}