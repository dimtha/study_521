#pragma once
#include <cstring>

class Student {
private:
	char* stud_name;
	int stud_age;
	int stud_grades[5];
public:
	Student();
	Student(const char* newName, int newAge, int grades[5]);

	int getAge();
	int getGrade(int index);
	void getName(char* outName);
	void* setName(const char* newName);
	void setAge(int newAge);
	void setGrade(int index, int value);
	double getAverage();
	void isExcellent();
	void showInfo();
};

