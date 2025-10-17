#include <iostream>
#include "MyArray.h"
using namespace std;

int main() {

	int size;
	cout << "enter size: \n";
	cin >> size;

	int* arr_nums = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr_nums[i];
	}

	MyArray arr(arr_nums, size);
	arr.getArray();
	arr.getSize();

	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr.getArray()[i] << ' ';
	}
	cout << endl;

	int* arr_nums2 = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr_nums2[i];
	}

	arr.setArray(arr_nums2, arr.getSize());

	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr.getArray()[i]<<' ';
	}
	cout << endl;

	cout << arr.getSum() << endl;

	cout << arr.getIndex(2) <<endl;

	arr.getSort(arr_nums2, arr.getSize());

	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr.getArray()[i] << ' ';
	}
	cout << endl;

	arr.~MyArray();
	delete[] arr_nums,arr_nums2;
	return 0;
}