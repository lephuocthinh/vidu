#include <iostream>
using namespace std;
int hieu(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	hieu(a, b);

	system("pause");
	return 0;
}
int hieu(int a, int b) {
	return a - b;
}
