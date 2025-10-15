#include <iostream>
#include <cstring>
#include "stud_class.h"
using namespace std;

static char* copyNameOrDefault(const char* newName)
{
	if (!newName || !*newName) {
		const char* def = "NoName";
		size_t size = strlen(def);
		char* p = new char[size + 1];
		strcpy_s(p, size + 1, def);
		return p;
	}
	size_t size = strlen(newName);
	char* stud_name = new char[size + 1];
	strcpy_s(stud_name, size + 1, newName);
	return stud_name;
}

static char* defName() {
	const char* def = "NoName";
	size_t size = strlen(def);
	char* stud_name = new char[size + 1];
	strcpy_s(stud_name, size + 1, def);
	return stud_name;
}

Student::Student()
{
	stud_name = defName();
	stud_age = 0;
	for (int i = 0; i < 5; i++) stud_grades[i] = 0;
}

Student::Student(const char* newName, int newAge, int grades[5])
{
	if (newName && *newName) {
		size_t n = std::strlen(newName);
		stud_name = new char[n + 1];
		strcpy_s(stud_name, n + 1, newName);
	}
	else {
		stud_name = defName();
	}

	stud_age = newAge;

	if (grades) {
		for (int i = 0; i < 5; ++i) stud_grades[i] = grades[i];
	}
	else {
		for (int i = 0; i < 5; ++i) stud_grades[i] = 0;
	}

}

int Student::getAge()
{
	return stud_age;
}

int Student::getGrade(int index)
{
	if (index >= 0 && index < 5)
		return stud_grades[index];
	else
		return -1;
}

void* Student::setName(const char* newName)
{
	if (newName) {
		char* tmp = copyNameOrDefault(newName);
		stud_name = tmp;
	}
	else {
		stud_name = defName();
	}
	return static_cast<void*>(stud_name);
}

void Student::setAge(int newAge)
{
	if (newAge >= 0) {
		stud_age = newAge;
	}
}

void Student::setGrade(int index, int value)
{
	if (index >= 0 && index < 5) {
		stud_grades[index] = value;
	}
}

void Student::getName(char* outName)
{
	if (outName == nullptr) return;

	const char* src = stud_name;
	size_t size = strlen(src);
	strcpy_s(outName, size + 1, stud_name);
}

void Student::showInfo()
{
	cout << "Student name: " << stud_name << endl;
	cout << "Student age: " << stud_age << endl;
	cout << "Student Grades: ";
	for (int i = 0; i < 5; i++)
		cout << stud_grades[i] << ' ';
	cout << "\n\n";
}
double Student::getAverage()
{
	double aveGrade = 0;
	for (int i = 0; i < 5; i++) {
		aveGrade += stud_grades[i];
	}
	return aveGrade / 5;
}

void Student::isExcellent()
{
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (stud_grades[i] >= 90) {
			count++;
		}
	}
	(count == 5) ? cout << "Good Job!" : cout << "Not enoth";
}
