#include <iostream>
#include <cstring>
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
//		cout << "num1: " << num1 << "\num2: " << num2 << "\n\n";
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

#pragma region 2
//class Student {
//
//private:
//
//	char* stud_name = nullptr;
//	int stud_age = 0;
//	int stud_phone = 0;
//	char* stud_city = nullptr;
//	char* stud_country = nullptr;
//	char* school_name = nullptr;
//	char* school_city = nullptr;
//	char* school_country = nullptr;
//	char* school_group = nullptr;
//
//public:
//
//	static char* copyLine(const char* newLine)
//	{
//		if (!newLine) return nullptr;
//		size_t size = strlen(newLine);
//		char* buf = new char[size + 1];
//		strcpy_s(buf, size + 1, newLine);
//		return buf;
//	}
//
//	Student() = default;
//
//	Student(const char* name, int age, int phone, const char* city, const char* country, const char* s_name, const char* s_city, const char* s_country, const char* s_group) : stud_name{ copyLine(name) }, stud_age{ age }, stud_phone{ phone }, stud_city{ copyLine(city) }, stud_country{ copyLine(country) }, school_name{ copyLine(s_name) }, school_city{ copyLine(s_city) }, school_country{ copyLine(s_country) }, school_group{ copyLine(s_group) } {};
//
//	const char* getName() { return stud_name; };
//	int getAge() { return stud_age; };
//	int getPhone() { return stud_phone; };
//	const char* getCity() { return stud_city; };
//	const char* getCountry() { return stud_country; };
//	const char* getSName() { return school_name; };
//	const char* getSCity() { return school_city; };
//	const char* getSCountry() { return school_country; };
//	const char* getSGroup() { return school_group; };
//
//	void setName(const char* name) {
//		char* tmp = copyLine(name);
//		stud_name = tmp;
//	}
//
//	void setAge(int age) {
//		if (age > 0) {
//			stud_age = age;
//		}
//	}
//
//	void setPhone(int phone) {
//		if (phone > 0) {
//			stud_phone = phone;
//		}
//	}
//
//	void setCity(const char* city) {
//		char* tmp = copyLine(city);
//		stud_city = tmp;
//	}
//
//	void setCountry(const char* country) {
//		char* tmp = copyLine(country);
//		stud_country = tmp;
//	}
//
//	void setSName(const char* s_name) {
//		char* tmp = copyLine(s_name);
//		s_name = tmp;
//	}
//
//	void setSCity(const char* s_city) {
//		char* tmp = copyLine(s_city);
//		s_city = tmp;
//	}
//
//	void setSCountry(const char* s_country) {
//		char* tmp = copyLine(s_country);
//		s_country = tmp;
//	}
//
//	void getSGroup(const char* s_group) {
//		char* tmp = copyLine(s_group);
//		s_group = tmp;
//	}
//
//	~Student() {
//		delete[] stud_name;
//		delete[] stud_city;
//		delete[] stud_country;
//		delete[] school_name;
//		delete[] school_city;
//		delete[] school_country;
//		delete[] school_group;
//	}
//
//};
//
//
//int main() {
//
//	const char* name = "Vasya";
//	int age = 20;
//	int phone = 1234567;
//	const char* city = "Kyiv";
//	const char* country = "Ukraine";
//	const char* s_name = "1";
//	const char* s_city = "Kyiv";
//	const char* s_country = "Ukraine";
//	const char* s_group = "A1";
//
//	Student stud(name, age, phone, city, country, s_name, s_city, s_country, s_group);
//	cout << "Name: " << stud.getName() << '\n';
//	stud.setName("Petro");
//	cout << "New name: " << stud.getName() << '\n';
//	cout << "Age: " << stud.getAge() << '\n';
//	stud.setAge(56);
//	cout << "New age: " << stud.getAge() << '\n';
//	return 0;
//}
#pragma endregion

#pragma region 3

class FractionalNumber {
private:
	double nume = 0;
	double deno = 0;
public:
	FractionalNumber() {

	};

	FractionalNumber(double n, double d) :nume(n), deno(d) {
		cout << "Enter nume: \n";
		cin >> nume;
		cout << "Enter deno: \n";
		cin >> deno;
		if (deno <= 0) deno = 1;
	};

	double getNume() { return nume; };
	double getDeno() { return deno; };
	void setNume(double n) {
		nume = n;
	};
	void setDeno(double d) {
		if (d > 0) deno = d;
	};
	double getFract() {
		double fract = nume / deno;
		return fract;
	}

	//void fill_nume_deno() {
		//cout << "Enter nume: \n";
		//cin >> nume;
		//cout << "Enter deno: \n";
		//cin >> deno;
		//if (deno <= 0) deno = 1;
	//}

};

int main() {

	FractionalNumber a(1, 1);
	FractionalNumber b(1, 1);
	//a.fill_nume_deno();
	//b.fill_nume_deno();
	cout << "1 numerator: " << a.getNume() << "\t 1 denominator: " << a.getDeno() << endl;
	cout << "2 numerator: " << b.getNume() << "\t 2 denominator: " << a.getDeno() << endl;
	cout << a.getFract() << endl;
	cout << b.getFract() << endl;
	cout << a.getFract() * b.getFract() << endl;
	cout << a.getFract() / b.getFract() << endl;
	cout << a.getFract() + b.getFract() << endl;
	cout << a.getFract() - b.getFract() << endl;

	return 0;
}

#pragma endregion


//3)
//Реалізуйте клас Дріб.Необхідно зберігати чисельник і знаменник як поля класа.
//Реалізуйте методи для введення даних у змінні - члени,
//для виконання арифметичних операцій(додавання, віднімання, множення, ділення)

