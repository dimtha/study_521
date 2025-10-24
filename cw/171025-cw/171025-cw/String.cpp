#include <iostream>
#include "String.h"
using namespace std;

MyString::MyString(size_t s)
{
	size = s;
	if (size == 0) {
		str = nullptr;
	}
	else {
		str = new char[size + 1];
		str[size] = '\0';
	}
}

MyString::MyString(char* str)
{
	if (str != nullptr) {
		size = std::strlen(str);
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str);
	}
}

size_t MyString::getSize() const
{
	return size;
}

char* MyString::getStr() const
{
	return str;
}

int MyString::getCount()
{
	return counter;
}

<<<<<<< HEAD
void MyString::setSize(size_t s)
{
	if (s > 0) {
		this->size = s;
	}
}

void MyString::setStr(char* str)
{
	if (this->str != nullptr) {
		delete[] this->str;
		size = 0;
	}
	if (str != nullptr && strlen(str) > 0) {
		size = strlen(str);
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str);
=======
void MyString::setStr(char* str1)
{
	if (str != nullptr) {
		size_t size = strlen(str);
		str = new char[size + 1];
		strcpy_s(this->str, size + 1, str1);
>>>>>>> b8a87c425c5e81790fb706a08e8d052147ac5121
	}
}

void MyString::myStrcpy(MyString& obj)
{
<<<<<<< HEAD
	str = new char[obj.size + 1];
	strcpy_s(str, obj.size + 1, obj.getStr());
=======
	size = strlen(obj.str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size +1, obj.getChar());
>>>>>>> b8a87c425c5e81790fb706a08e8d052147ac5121
}

void MyString::myDeleteChar(char c)
{
	bool found = false;
	for (int i = 0; i < strlen(this->str); i++) {
		if (this->str[i] == c) {
			for (int j = i; j < strlen(this->str); j++) {
				str[j] = str[j + 1];
			}
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "any" << " (" << c << ") " << "in row" << endl;
	}
}

int MyString::myCharIndex(char c)
{
	for (int i = 0; i < strlen(this->str); i++) {
		if (str[i] == c) {
			return i ;
		}
	}
	return -1;
}

//MyString::~MyString()
//{
//	if (str != nullptr) delete[] str; 
//}

int MyString::counter = 0;

<<<<<<< HEAD
=======
int MyString::counter = 0;
>>>>>>> b8a87c425c5e81790fb706a08e8d052147ac5121
