#include <iostream>
using namespace std;
int tong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen thu 1: ";
	cin >> a;
	cout << "Nhap so nguyen thu 2: ";
	cin >> b;
	tong(a, b);

	system("pause");
	return 0;
}
int tong(int a, int b) {
	return a + b;
}
