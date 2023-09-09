#include <iostream>
#include<string>
using namespace std;
class student {
public://公共权限
	string m_name;
	int m_Id;

	//Behavior
	void showStudent()
	{
		cout << "Name:  " << m_name << "  Id:   " << m_Id << endl;
	}
	void setName(string name)
	{
		m_name = name;
	}
	void setName(int Id)
	{
		m_Id = Id;
	}
};
int main()
{
	student s1;
	s1.m_name = "晓辉";
	s1.m_Id = 1;
	s1.setName("电脑");
	s1.showStudent();
	student s2;
	s2.m_name = "季欧";
	s2.m_Id = 2;
	s2.showStudent();
	return 0;
}