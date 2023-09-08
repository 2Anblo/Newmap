#include <iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
int main()
{
	Student s = { "AD",18,100 };
	Student* p = &s;
	cout << "Name is:" << p->name << "\nAge  " << p->age << "\nScore " << p->score << endl;
	system("pause");
	return 0;
}