#include <iostream>
using namespace std;
//public 公共权限
//protected 保护权限 
//private 私有权限
//class Person {
//	//Public
//public:
//	string m_name;
//
//protected:
//	string m_car;
//private:
//	int m_password;
//
//public:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "CAR";
//		m_password = 7355608;
//	}
//};
class C1 {
	int m_A;
};
struct C2{
	int m_A;
};
int main()
{
	//Person p1;

	//p1.m_name = "Kanye";
	//p1.m_car = "bb";
	//p1.m_password = 123;
	C1 c1;
	//c1.m_A = 12;
	C2 c2;
	c2.m_A = 100;
	system("pause");
	return 0;
}