#include <iostream>
using namespace std;
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void test() {
	auto a = 1;
	auto b = 'c' + 'd';
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
}
void test1() {
	int a = 10;
	int* pa = &a;
	*pa = 20;

	int& ra = a;
	ra = 30;
	cout << *pa << endl;
}
void fun(int a) {
	cout << "func(int)" << endl;
}

void fun(int* a) {
	cout << "func(int*)" << endl;
}

void test2() {
	fun(NULL);
	fun(0);
	fun((int*)NULL);
}

struct Student {
	//成员函数
public:
	void SetStudentInfo(const char* name, const char* gender, int age) {
		strcpy_s(_name, name);
		strcpy_s(_gender, gender);
		_age = age;
	}
	void PrintStudentInfo() {
		cout << _name << " " << _gender << " " << _age << endl;
	}
	char _name[20];
	char _gender[20];
	int _age;
};
//1.做参数
void Swap(int& ra, int& rb) {   //值传递
	int tmp = ra;
	ra = rb;
	rb = tmp;
}

//2.做返回值 

int& add1(int& a) {
	return ++a;
}
int& add2(int a) { //实参的拷贝
	return ++a;
}

void test() {
	int a = 1;
	int& b = add1(a);
	int& c = add2(a);
	cout << b << endl;  //输出b=2
	cout << c << endl;  //输出错误: 返回的是局部变量或临时变量的地址
}

class Cricle {
public:
	double radius;
	Circle() {
		radius = 1;
	}
	Circle(double newradius) {
		radius = newradius;
	}
	double getArea() {
		return radius * radius*3.14159;
	}

};

//int main() {
//	Student st;
//	Cricle c;
//	st.SetStudentInfo("李四", "男", 19);
//	st.PrintStudentInfo();
//	
//
//	return 0;
//}
int main() {
	Cricle  cl;
	cl.Circle;
	cl.Circle(3.0);
	cl.getArea;
	return 0;
}