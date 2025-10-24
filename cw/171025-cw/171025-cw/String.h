#pragma once
class MyString
{

private:
	size_t size = 0;
	char* str = nullptr;
	static int counter;
public:
	MyString() = default;
	MyString(size_t s);
	MyString(char* str);
	size_t getSize() const;
	char* getStr() const;
	static int getCount();
	void setSize(size_t size);
	void setStr(char* str);
	void myStrcpy(MyString& obj);
	void myDeleteChar(char c);
	int myCharIndex(char c);
	//~MyString();



};


