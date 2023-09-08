#include<iostream>
#include<string>
#define MAX_SIZE 1000
using namespace std;
struct contactor {
	string m_name;
	int m_sex;
	int m_age;
	string address;
	string phone;
};
struct addressbook {
	int size;
	struct contactor personArray[MAX_SIZE];
};
void showMenu()
{
	cout << "1、Add a contactor\t" << endl;
	cout << "2、Show all contactors\t" << endl;
	cout << "3、Delete a contactor\t" << endl;
	cout << "4、Search for a contactor\t" << endl;
	cout << "5、Modify a contactor\t" << endl;
	cout << "6、Clean up adress book\t" << endl;
	cout << "0、Exit adress book\t" << endl;
}
void addPerson(addressbook* abs)
{
	if (abs->size == MAX_SIZE)
	{
		cout << "It is full nowhere to store!!!" << endl;
		return;
	}
	else {
		string name;
		cout << "Please enter your name" << endl;
		cin >> name;
		abs->personArray[abs->size].m_name = name;
		cout << "Please enter your gender" << endl;
		cout << "1---male" << endl;
		cout << "2---female" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->size].m_sex = sex;
				break;
			}
			else
			{
				cout << "Wrong!!Please enter again!!!" << endl;
				break;
			}
				
		}
		cout << "Please enter your age" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->size].m_age = age;
		cout << "Please enter your Phone" << endl;
		string number;
		cin >> number;
		abs->personArray[abs->size].phone = number;
		cout << "Please enter your Adress" << endl;
		string Address;
		cin >> Address;
		abs->personArray[abs->size].address = Address;
		abs->size++;
		cout << "OK,it's done!!!" << endl;
		system("pause");
		system("cls");

	}
}
void showPerson(addressbook* abs)
{
	if (abs->size == 0) {
		cout << "It is empty, sorry!" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++)
		{
			cout << "name:  " << abs->personArray[i].m_name << " \t";
			cout << "gender:  " << (abs->personArray[i].m_sex ==1 ? "male":"female" )<< " \t";
			cout << "age:  " << abs->personArray[i].m_age << " \t";
			cout << "Phone:  " << abs->personArray[i].phone << " \t";
			cout << "adress:  " << abs->personArray[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}
int Exist(addressbook* abs,string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArray[i].m_name == name)
			return i;
	}
	return -1;
}
void Delete(addressbook* abs)
{
	cout << "Please enter a name" << endl;
	string name;
	cin >> name;
	int ret = Exist(abs, name);
	if (Exist(abs, name) == -1)
	{
		cout << "There is nobody!!!" << endl;
	}
	else {
		for (int i = ret; i < abs->size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->size--;
		cout << "It is deleted!!!" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(addressbook* abs)
{
	cout << "Please enter the name" << endl;
	string name;
	cin >> name;
	int ret = Exist(abs, name);
	if (ret != -1)
	{
		cout << "Name " << abs->personArray[ret].m_name << "\t";
		cout << "gender:  " << (abs->personArray[ret].m_sex == 1 ? "male" : "female") << " \t";
		cout << "Age" << abs->personArray[ret].m_age << "\t";
		cout << "Phone " << abs->personArray[ret].phone << "\t";
		cout << "Address " << abs->personArray[ret].address << endl;
	}
	else {
		cout << "There is nobody!!!" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(addressbook* abs)
{
	cout << "Please enter the name" << endl;
	string name;
	cin >> name;
	int ret = Exist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "Please enter name:" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		cout << "PLease enter gender:" << endl;
		cout << "1-----male" << endl;
		cout << "2-----female" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "Wrong!!Please enter again!!!" << endl;
			}

		}
		cout << "Please enter age:" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_age = age;
		cout << "Please enter Phone:" << endl;
		string number;
		cin >>number;
		abs->personArray[ret].phone = number;
		cout << "Please enter Address:" << endl;
		string Address;
		cin >> Address;
		abs->personArray[ret].address = Address;

		cout << "OK, It is Done!!!" << endl;

	}
	else {
		cout << "There is nobody!!!" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(addressbook* abs) {
	abs->size = 0;
	cout << "It is clean!!!" << endl;
	system("pause");
	system("cls");
}

int main()
{
	addressbook abs;
	abs.size = 0;

	int select = 0;// For users to put in variable numbers

	
	while (true) {
		showMenu();

		cin >> select;
		switch (select) {
		case 1://Add a contactor
			addPerson(&abs);
			break;
		case 2://Show all contactors
			showPerson(&abs);
			break;
		case 3://Delete a contactor
		{
			Delete(&abs);
			break;
		}
			
		case 4://Search for a contactor
			findPerson(&abs);
			break;
		case 5://Modify a contactor
			modifyPerson(&abs);
			break;
		case 6://Clean up address book
			cleanPerson(&abs);
			break;
		case 0://Exit adress book
			cout << "See u next time!" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");	
	return 0;
}