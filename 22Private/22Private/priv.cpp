#include <iostream>
using namespace std;
#include<string>

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

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
	p.setName("����");
	p.setLover("��ŷ");
	p.setAge(1000);
	cout << "NAME:" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;
	system("pause");
	return 0;
}