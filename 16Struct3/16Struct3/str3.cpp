#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
void printStudent1(struct student a)
{
	a.age = 100;
	cout << a.name << "\n" << a.age << "\n" << a.score << endl;
}
void printStudent2(struct student *p)
{
	p->age = 100;
	cout << p->name << "\n" << p->age << "\n" << p->score << endl;
}
int main()
{
	struct student s;
	s.name = "Justin";
	s.age = 18;
	s.score = 100;
	struct student* p = &s;
	/*printStudent1(s);
	
	cout << s.name << "\n" << s.age << "\n" << s.score << endl;*/
	printStudent2(p);
	cout << p->name << "\n" << p->age << "\n" << p->score << endl;
	system("pause");
	return 0;
}