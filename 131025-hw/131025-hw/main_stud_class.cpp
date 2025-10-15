#include <iostream>
#include "stud_class.h"
using namespace std;

int main() {

	const char* name = "Vasya";
	const char* set_name = "John";
	int grades[5] = { 1,2,3,4,5 };

	Student std1;
	std1.showInfo();

	Student std2(name, 20, grades);
	std2.setGrade(0, 89);
	std2.setGrade(1, 93);
	std2.setGrade(2, 95);
	std2.setGrade(3, 97);
	std2.setGrade(4, 99);
	std2.showInfo();

	std1.setName(set_name);
	char buf[50];
	std1.getName(buf);
	cout << "Student1 set name: " << buf << endl;
	std1.setAge(33);
	cout << "Student1 set age: " << std1.getAge() << endl;
	cout << endl;

	cout << "Student2 age: " << std2.getAge() << endl;
	cout << "Student2 grade: " << std2.getGrade(3) << endl;
	cout << "Student2 grades average: " << std2.getAverage() << endl;

	std2.isExcellent();
	cout << endl;

	return 0;
}