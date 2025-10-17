#pragma once
class MyArray
{
private:
	int size = 0;
	int* array = nullptr;
public:
	MyArray();
	MyArray(int* arr1, int size1);
	int getSize();
	int* getArray();
	void setSize(int size1);
	void* setArray(int* arr1, int size1);
	int getSum();
	int getIndex(int indx);
	void getSort(int* arr1, int size1);
	~MyArray();
};