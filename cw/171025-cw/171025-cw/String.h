#pragma once
class MyString
{

private:
	size_t size;
	char* str;
	static int counter;
public:
	MyString();
	MyString(size_t s);
	MyString(const char* str);
	size_t getSize();
	char* getChar();
	//static int getCount();
	void setSize(size_t size);
	void* setChar(char* str);
	void myStrcpy(MyString& obj);
	//void myDeleteChar(char c);
	//int myCharIndex(char c);
};


