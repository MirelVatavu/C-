//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	// reverse digits
//	int n;
//	cin >> n;
//	int a = n; // for GCD
//	cout << "Reverse : ";
//	while (n > 0) {
//		int temp = n % 10;
//		n = n / 10;
//		cout << temp;
//	}
//
//	cout << '\n';
//	// extract GCD for 2 numbers
//
//	int b;
//
//	cin >> b;
//
//	while (a != b) {
//		if (a > b) {
//			a -= b;
//		}
//		else {
//			b -= a;
//		}
//	}
//	cout << "GDC " << a;
//}