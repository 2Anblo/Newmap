#include <iostream>
using namespace std;
const double PI = 3.14;
class circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��circle class  ���������circle(����)
	circle c1;
	c1.m_r = 10;
	cout << "ZCΪ��" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}