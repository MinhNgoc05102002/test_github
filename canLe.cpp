#include<iostream>
#include<iomanip>

using namespace std;
//căn lề bằng setw
//setw(n) căn lề phải là mặc định
int main() {
	long pop1 = 2425785, pop2 = 47, pop3 = 9761;

	cout << setw(8) << "TION" << setw(12) << "POPULATION" << endl << setw(8) << "Portcity" << setw(12) << pop1 << endl;
	cout << setw(8) << "Hightown" << setw(12) << pop2 << endl;
	cout << setw(8) << "Lowville" << setw(12) << pop3 << endl;
	
	//chỉnh setw căn lề trái phải: 
	cout << setw(5) << left << "ID"; //độ rộng 5 kí tự, căn lề trái
	cout << setw(30) << left << "Name"; 
	cout << setw(20) << right << "Address" << endl;// độ rộng 20 kí tự căn lề phải
	cout << setfill('-');
	cout << setw(55) << "-" << endl;

	cout << setfill(' ');
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Nguyen Doan Ngoc Giau";
	cout << setw(20) << right << "Sai Gon" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Tran Kim Long";
	cout << setw(20) << right << "Da Lat" << endl;

	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Nguyen Son Tung";
	cout << setw(20) << right << "Dong Nai" << endl;

	//sd setprecision để chỉnh số chữ sau dấu phẩy
	cout << endl;
	double f = 3.14159;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	cout << fixed;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
}