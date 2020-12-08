#include<iostream>
using namespace std;
int main()
{
	int ascii, asciinew;
	char chu, chumoi;
	cout << "Bien doi chu thuong thanh chu hoa va nguoc lai:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Nhap mot chu cai: ";
	cin >> chu;
	ascii = int(chu); // Đổi chữ sang mã ASCII.
	// Trường hợp nhập vào chữ hoa:
	if ((ascii >= 65) && (chu <= 90)) // Mã ASCII của A và Z là 65 và 90.
	{
		asciinew = ascii + 32; // Trong ASCII, chữ thường hơn chữ hoa 32 đơn vị.
		chumoi = char(asciinew); // Đổi mã ASCII sang chữ.
		cout << "Chu sau khi bien doi: " << chumoi;
	}
	// Trường hợp nhập vào chữ thường:
	else if ((ascii >= 97) && (ascii <= 122)) // Mã ASCII của a và z là 97 và 122.
	{
		asciinew = ascii - 32; // Tương tự như trên.
		chumoi = char(asciinew);
		cout << "Chu sau khi bien doi: " << chumoi;
	}
	else
		cout << "Du lieu khong hop le.";
	cout << endl;
	return 0;
}