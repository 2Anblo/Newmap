#include <iostream>
using namespace std;
#include<string>

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//Human
class Person {
public:
	//SEtname
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	int getAge()//ONly READ
	{
		/*m_Age = 0;*/
		return m_Age;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "WRONG!!!" << endl;
			return;
		}
		m_Age = age;
	}
	void setLover(string lover)//ONly write
	{
		m_Lover = lover;
	}
private:
	//Name  READABLE&Writable
	string m_Name;
	//age ONLYREAD
	int m_Age;
	//lover ONLYWRITE
	string m_Lover;
};
int main()
{
	Person p;
	p.setName("符号");
	p.setLover("季欧");
	p.setAge(1000);
	cout << "NAME:" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;
	system("pause");
	return 0;
}