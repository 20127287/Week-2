#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, delta, x, xkep, x1, x2;
	cout << "Giai phuong trinh bac hai ax^2 + bx + c = 0" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;
	cout << "-------------------------------------------" << endl;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh co vo so nghiem." << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem." << endl;
			}
		}
		else {
			x = - c / b;
			cout << "Phuong trinh co nghiem x = " << x << endl;
		}
	}
	else {
		delta = b*b - 4 * a*c;
		if (delta > 0) {
			x1 = (- b + sqrt(delta)) / (2 * a);
			x2 = (- b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co hai nghiem phan biet:" << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else if (delta == 0) {
			xkep = - b / (2 * a);
			cout << "Phuong trinh co nghiem kep: x = " << xkep << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem." << endl;
		}
	}
	return 0;
}