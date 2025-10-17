#include <iostream>
#include "MyArray.h"
using namespace std;

MyArray::MyArray() {};
MyArray::MyArray(int* arr1, int size1) : array(arr1), size(size1) {};

int* MyArray::getArray() { return array; }
int MyArray::getSize() { return size; };

void MyArray::setSize(int size1)
{
	(size1 > 0) ? size = size1 : 0;
}

void* MyArray::setArray(int* arr1, int size1)
{
	if (size > 0) {
		for (int i = 0; i < size; i++) {
			array[i] = arr1[i];
		}
		return array;
	}
	else {
		return nullptr;
	}
}

int MyArray::getSum() {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
};

int MyArray::getIndex(int indx) {
	if (indx > 0 && indx <= size) {
		return array[indx];
	}
}

void MyArray::getSort(int* arr1, int size1)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	};
}

MyArray::~MyArray()
{
	if (array != nullptr) {
		delete[] array;
	}
}