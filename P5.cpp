#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long double km, tien;
	cout << "Tinh so tien di taxi:" << endl;
	cout << "---------------------" << endl;
	cout << "Nhap so km: ";
	cin >> km;
	if ((km >= 0) && (km <= 1)) {
		tien = km * 15000;
		cout << "So tien phai tra la: " << tien << "d";
	}
	else if ((km > 1) && (km <= 5)) {
		tien = 15000 + (km - 1) * 13500;
		cout << "So tien phai tra la: " << tien << "d";
	}
	else if ((km > 5) && (km <= 120)) {
		tien = 15000 + 13500 * 4 + (km - 5) * 11000;
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d"; // Dùng setprecision để hiển thị được toàn bộ chữ số.
	}
	else if (km > 120) {
		tien = (15000 + 13500 * 4 + (km - 5) * 11000) * 0.9; // Vì giảm 10% số tiền nên nhân với 0.9.
		cout << "So tien phai tra la: " << fixed << setprecision(0) << tien << "d";
	}
	else
		cout << "Du lieu khong hop le." << endl;
	cout << endl;
	return 0;
}