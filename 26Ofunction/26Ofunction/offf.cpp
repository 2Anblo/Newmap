#include<iostream>
#include<string>
using namespace std;
class Person {
public:
	Person() {//无参构造
		cout << "无参构造函数调用" << endl;
	}
	Person(int a) {//有参构造
		age = a;
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person&a) {//Copy构造function
		age = a.age;
		cout << "COPY构造函数调用" << endl;
	}
	~Person() {
		cout << "析构函数调用" << endl;
	}
	int age;
};
void test01() {
	Person p;
	Person p2(10);
	Person p3(p2);
	//调佣默认构造函数时不要加();
	//cout << p2.age << endl;
	//cout << p3.age << endl;
	//Person p();
				/*2、显示法*/
	//Person p1;//无参
	//Person p2 = Person(10);//有参
	//Person p3 = Person(p2);//拷贝
	////Person(10);//匿名对象
	////cout << "AAAAAAAA" << endl;
	////3、隐式转换法
	//Person p4 = 10; //Person p4=Person(10);
	//Person p5 = p4;//COPY
}
int main()
{
	test01();
	system("pause");
	return 0;
}