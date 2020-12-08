#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	float toan, ly, hoa, tb;
	cout << "Nhap ho ten hoc sinh: ";
	string hoten;
	getline(cin, hoten); // Hiển thị đầy đủ chuỗi có khoảng trắng.
	cout << "Nhap diem toan: ";
	cin >> toan;
	cout << "Nhap diem ly: ";
	cin >> ly;
	cout << "Nhap diem hoa: ";
	cin >> hoa;
	cout << "------------------------------" << endl;
	cout << "Ho ten: " << hoten << endl;
	tb = (toan + ly + hoa) / 3;
	cout << "Diem trung binh: " << fixed << setprecision(1) << tb << endl; // Làm tròn 1 chữ số thập phân.
	if (tb >= 9)
		cout << "Xep loai: Xuat sac." << endl;
	else if ((tb >= 8) && (tb < 9))
		cout << "Xep loai: gioi." << endl;
	else if ((tb >= 6.5) && (tb < 8))
		cout << "Xep loai: Kha." << endl;
	else if ((tb >= 5) && (tb < 6.5))
		cout << "Xep loai: Trung binh." << endl;
	else if ((tb >= 3.5) && (tb < 5))
		cout << "Xep loai: Yeu." << endl;
	else if (tb < 3.5)
		cout << "Xep loai: Kem." << endl;
	return 0;
}