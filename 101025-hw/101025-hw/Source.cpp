#include <iostream>
#include <algorithm>
using namespace std;


#pragma region 1

//class BinaryAndResult {
//
//private:
//	int num1;
//	int num2;
//
//public:
//	BinaryAndResult(int n1, int n2) : num1(n1), num2(n2) {};
//
//	int get_num1() { return num1; };
//	int get_num2() { return num2; };
//
//	void show_num() {
//		cout << "num1: " << num1 << "\nnum2: " << num2 << "\n\n";
//	}
//
//	int bi_num_size(int num) {
//		if (num == 0) return 1;
//		int size = 0;
//		while (num != 0) {
//			num /= 2;
//			size++;
//		}
//		return size;
//	}
//
//	void create_bi_num(int* bi_num, int num, int size) {
//		for (int i = 0; i < size; i++) {
//			bi_num[i] = num % 2;
//			num = num / 2;
//		}
//	}
//
//	void show_bi_num(int* bi_num, int size) {
//		for (int i = size - 1; i >= 0; i--) cout << bi_num[i];
//		cout << endl;
//	}
//
//	void add_zero_to_left(int*& bi, int& size, int n_size) {
//		int* tmp = new int[n_size];
//		for (int i = 0; i < size; i++) {
//			tmp[i] = bi[i];
//		}
//		for (int i = size; i < n_size; i++) {
//			tmp[i] = 0;
//		}
//		delete[] bi;
//		bi = tmp;
//		size = n_size;
//	}
//
//	void and_operation_result(int* bi_num1, int* bi_num2, int* bi_res, int& max_size) {
//		for (int i = 0; i < max_size; i++) {
//			//if (bi_num1[i] == 1 && bi_num2[i] == 1) {
//			//	bi_res[i] = 1;
//			//}
//			//else {
//			//	bi_res[i] = 0;
//			//}
//			bi_res[i] = bi_num1[i] & bi_num2[i];
//		}
//	}
//
//	void boundary_line(int& max_size) {
//		for (int i = 0; i < max_size; i++) {
//			cout << '-';
//		}
//		cout << endl;
//	}
//};
//
//
//int main() {
//
//	BinaryAndResult bi(35, 17);
//	int n1 = bi.get_num1();
//	int n2 = bi.get_num2();
//
//	int size1 = bi.bi_num_size(n1);
//	int size2 = bi.bi_num_size(n2);
//	int max_size = max(size1, size2);
//
//	int* bi_num1 = new int[size1];
//	int* bi_num2 = new int[size2];
//	int* bi_res = new int[max_size];
//
//	bi.show_num();
//
//	bi.create_bi_num(bi_num1, n1, size1);
//	bi.create_bi_num(bi_num2, n2, size2);
//
//	bi.add_zero_to_left(bi_num1, size1, max_size);
//	bi.add_zero_to_left(bi_num2, size2, max_size);
//	bi.show_bi_num(bi_num1, size1);
//	bi.show_bi_num(bi_num2, size2);
//
//	bi.and_operation_result(bi_num1, bi_num2, bi_res, max_size);
//	bi.boundary_line(max_size);
//	bi.show_bi_num(bi_res, max_size);
//
//	delete[] bi_num1;
//	delete[] bi_num2;
//	delete[] bi_res;
//	return 0;
//}

#pragma endregion

class StudentInfo {
private:
	char stud_name;
	int stud_age;
	int stud_phone;
	char stud_city;
	char stud_country;
	char school_name;
	char school_city;
	char school_country;
	char school_group;
public:
	StudentInfo(char st_name, int st_age, int st_phone, char st_city, char st_country, char sch_name, char sch_city, 
	char school_country;
	char school_group;) {

	}
}


//2)
//Реалізуйте клас "Студент".Необхідно зберігати у змінних - членах класу :
//ПІБ, дату народження, контактний телефон, місто, країну, назву навчального закладу,
//місто та країну(де розташований навчальний заклад), номер групи.
//Реалізуйте методи класу для введення даних, виведення даних.
//
//3)
//Реалізуйте клас Дріб.Необхідно зберігати чисельник і знаменник як поля класа.
//Реалізуйте методи для введення даних у змінні - члени,
//для виконання арифметичних операцій(додавання, віднімання, множення, ділення)