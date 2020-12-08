#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x, A;
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n <= 0)
		cout << "Gia tri n khong hop le.";
	else {
		cout << "Nhap so thuc x: ";
		cin >> x;
		A = pow((x * x + 1), n);
		cout << "(x^2 + 1)^n = " << A << endl;
	}
	return 0;
}