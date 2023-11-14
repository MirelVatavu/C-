//#include <iostream>
//
//using namespace std;
//
//
//
//class Complex {
//private:
//	int real;
//	int img;
//public:
//	Complex(int r = 0, int i = 0) {
//		real = r;
//		img = i;
//	}
//
//	Complex  operator+(Complex x) {
//		Complex temp;
//		temp.real = real + x.real; // real belongs to the object on whom we called the function add
//		temp.img = img + x.img; // img belongs to the object on whom we called the function add
//
//		return temp;
//	}
//
//
//	Complex operator-(Complex x) {
//		Complex temp;
//		temp.real = real - x.real; // real belongs to the object on whom we called the function add
//		temp.img = img - x.img; // img belongs to the object on whom we called the function add
//
//		return temp;
//	}
//
//	friend ostream& operator<<(ostream& out, Complex& c);
//
//};
//ostream& operator<<(ostream& out, Complex& c) {
//	out << c.real << " i" << c.img << '\n';
//
//	return out;
//}

//int main() {
//
//	Complex C1(3, 10);
//	Complex C2(5, 20);
//	Complex C3;
//	
//	C3 = C1 + C2 + C1 + C2;
//	cout << C3;
//
//	C3 = C2 - C1;
//	cout << C3;
//
//}