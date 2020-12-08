#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char loai;
	long double ngay, tien;
	cout << "Tinh tien thue phong khach san:" << endl;
	cout << "-------------------------------" << endl;
	cout << "Nhap loai phong (A, B, C): ";
	cin >> loai;
	cout << "Nhap so ngay thue phong: ";
	cin >> ngay;
	if ((loai == 'A') && (ngay >= 0) && (ngay < 12)) {
		tien = 400000 * ngay;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else if ((loai == 'A') && (ngay >= 0) && (ngay >= 12)) {
		tien = (400000 * ngay) * 0.9;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else if ((loai == 'B') && (ngay >= 0) && (ngay < 12)) {
		tien = 300000 * ngay;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else if ((loai == 'B') && (ngay >= 0) && (ngay >= 12)) {
		tien = (300000 * ngay) * 0.92;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else if ((loai == 'C') && (ngay >= 0) && (ngay < 12)) {
		tien = 250000 * ngay;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else if ((loai == 'C') && (ngay >= 0) && (ngay >= 12)) {
		tien = (250000 * ngay) * 0.92;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d" << endl;
	}
	else {
		cout << "Du lieu khong hop le." << endl;
	}
return 0;
}