//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	void fun1() {
//		cout << "fun1 of Base" << endl;
//	}
//};
//
//class Derived :public Base {
//public:
//	void fun2() {
//		cout << "fun2 of Derived" << endl;
//	}
//};
//
//class Rectangle {
//public:
//	void area() {
//		cout << "Area of rectangle" << endl;
//	}
//};
//
//class Cuboid:public Rectangle {
//public:
//	void volume() {
//		cout << "Cuboid volume" << endl;
//	}
//};
//
//class BasicCar {
//public:
//	void start() {
//		cout << "Car started" << endl;
//	}
//};
//
//class AdvanceCar : public BasicCar {
//public:
//	void playMusic() {
//		cout << "Music playing" << endl;
//	}
//};
//int main() {
//	Derived d;
//	Base* ptr = &d;
//	d.fun1();
//	d.fun2();
//	ptr->fun1();
//	//ptr->fun2(); // creating a Base pointer pointing to derived class can't access any functions from the derived class
//
//	cout << "\n=================================\n";
//	/*Base b;
//	Derived* dptr =&b; // can't initialize derived pointer with base object because Base object doesn't know the functions from the derived class
//	*/
//
//	Cuboid c;
//	c.area();
//	c.volume();
//	Rectangle* rptr = &c;
//	rptr->area();
//	//rptr->volume();
//	cout << "\n=================================\n";
//	AdvanceCar car;
//	car.start();
//	car.playMusic();
//	BasicCar* pCar = &car;
//	pCar->start();
//
//	return 0;
//}