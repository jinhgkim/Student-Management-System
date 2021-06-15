#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int student_ID;
	string firstName, lastName;
	string email;
	string gender;
public:
	Student();

	void registerNewStudent();
	void printStudentInfo();
};
Student::Student()
{
	student_ID = NULL;
	firstName = "N/A";
	lastName = "N/A";
	email = "N/A";
	gender = "N/A";
}
void Student::registerNewStudent()
{
	cout << "Register a new student" << endl;
	cout << endl;
	cout << "Enter student id: "; cin >> student_ID;
	cout << "Enter first name and last name: "; 
	cout << endl; cin >> firstName >> lastName;
	cout << "Enter email: "; cin >> email;
	cout << "Enter gender: "; cin >> gender;
	cout << endl;
}

void Student::printStudentInfo()
{
	cout << student_ID << "\t" << firstName <<" "<< lastName << "\t" << email << "\t" << gender << endl;
}

int main()
{
	Student stu;
	stu.printStudentInfo();
	stu.registerNewStudent();
	stu.printStudentInfo();

	system("Pause");
	return 0;
}
