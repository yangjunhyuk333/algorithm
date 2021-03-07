#include <iostream>

using namespace std;

int plusNum(int a, int b) {

	return a + b;
}

int minusNum(int a, int b) {

	return a - b;
}

int mutipleNum(int a, int b) {

	return a * b;
}

int divideNum(int a, int b) {

	return a / b;
}

int divideNum2(int a, int b) {

	return a % b;
}

int main_1() {
	
	double a = 0, b = 0;

	cin >> a;
	cin >> b;

	cout << plusNum(a,b) << endl;
	cout << minusNum(a, b) << endl;
	cout << mutipleNum(a, b) << endl;
	cout << divideNum(a, b) << endl;
	cout << divideNum2(a, b);
	

	return 0;
}