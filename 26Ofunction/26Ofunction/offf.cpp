#include<iostream>
#include<string>
using namespace std;
class Person {
public:
	Person() {//�޲ι���
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a) {//�вι���
		age = a;
		cout << "�вι��캯������" << endl;
	}
	Person(const Person&a) {//Copy����function
		age = a.age;
		cout << "COPY���캯������" << endl;
	}
	~Person() {
		cout << "������������" << endl;
	}
	int age;
};
void test01() {
	Person p;
	Person p2(10);
	Person p3(p2);
	//��ӶĬ�Ϲ��캯��ʱ��Ҫ��();
	//cout << p2.age << endl;
	//cout << p3.age << endl;
	//Person p();
				/*2����ʾ��*/
	//Person p1;//�޲�
	//Person p2 = Person(10);//�в�
	//Person p3 = Person(p2);//����
	////Person(10);//��������
	////cout << "AAAAAAAA" << endl;
	////3����ʽת����
	//Person p4 = 10; //Person p4=Person(10);
	//Person p5 = p4;//COPY
}
int main()
{
	test01();
	system("pause");
	return 0;
}