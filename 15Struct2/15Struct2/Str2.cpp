#include <iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};
int main()
{
	teacher t;
	t.age = 15;
	t.id = 110;
	t.name = "Peter";
	t.stu.age = 10;
	t.stu.name = "Parker";
	t.stu.score = 115;
	cout << t.age << endl;
	cout << t.id << endl;
	cout << t.name << endl;
	cout << t.stu.age << endl;
	cout << t.stu.name << endl;
	cout << t.stu.score << endl;
	
	system("pause");
	return 0;
}