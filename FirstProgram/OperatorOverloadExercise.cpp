//#include <iostream>
//using namespace std;
//
//class Rational {
//private:
//	int P;
//	int Q;
//public:
//	Rational() {
//		P = 1;
//		Q = 1;
//	}
//
//	Rational(int P, int Q) {
//		this->P = P;
//		if (Q != 0) {
//			this->Q = Q;
//		}
//		else {
//			this->Q = 1;
//		}
//
//	}
//
//	Rational operator+(Rational x) {
//		Rational temp;
//		temp.P = this->P * x.Q + this->Q * x.P;
//		temp.Q = this->Q * x.Q;
//
//		return temp;
//	}
//
//	friend ostream& operator <<(ostream& out, Rational& x);
//};
//
//// &operator means that we can use cout even outside the function like cout << RationalNr. << "Any text after"...
//// without using the reference we would not be able to use "Any text after"
//ostream& operator <<(ostream& out, Rational &x) {
//	out << x.P << "/" << x.Q;
//
//	return out;
//}
//
//int main() {
//		Rational r1(3, 4), r2(2, 5), r3;
//		r3 = r1 + r2;
//		cout << r1 << " plus " << r2 << " = "<< r3 << '\n';
//}