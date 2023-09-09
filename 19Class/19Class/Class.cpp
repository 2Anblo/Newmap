#include <iostream>
using namespace std;
const double PI = 3.14;
class circle
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过circle class  创建具体的circle(对象)
	circle c1;
	c1.m_r = 10;
	cout << "ZC为：" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}