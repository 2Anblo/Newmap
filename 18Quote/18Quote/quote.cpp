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
// ��������������ֵ��
//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;
	return a;
}
//2�������ĵ��ÿ�����Ϊ��ֵ
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