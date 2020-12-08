#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap do dai canh a: ";
	cin >> a;
	cout << "Nhap do dai canh b: ";
	cin >> b;
	cout << "Nhap do dai canh c: ";
	cin >> c;
	cout << "------------------------------------------" << endl;
	if ((a + b <= c) || (b + c <= a) || (a + c <= b))
		cout << "3 canh vua nhap khong lap thanh mot tam giac." << endl;
	else {
		cout << "3 canh vua nhap co lap thanh mot tam giac." << endl;
		if ((a == b) && (b == c))
			cout << "Day la tam giac deu." << endl;
		else if (((a == b) && (c*c - a*a - b*b == 0)) || ((a == c) && (b*b - a*a - c*c == 0)) || ((b == c) && (a*a - b*b - c*c == 0)))
			cout << "Day la tam giac vuong can." << endl;
		else if ((a == b) || (a == c) || (b == c))
			cout << "Day la tam giac can." << endl;
		else if ((c*c - a*a - b*b == 0) || (b*b - a*a - c*c == 0) || (a*a - b*b - c*c == 0))
			cout << "Day la tam giac vuong." << endl;
		else
			cout << "Day la tam giac thuong." << endl;
	}
	return 0;
}