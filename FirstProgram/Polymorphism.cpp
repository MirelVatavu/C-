//#include <iostream>
//
//using namespace std;
//
//
////Function override
//class Base {
//public:
//	//If a Base pointer is created with an object Derived
//	//If display() is overrided in Derived, then the override version will be called if "virtual" is used
//	//Otherwise thid display() function will be called
// 	virtual void display() {
//		cout << "Display of Base" << endl;
//	}
//};
//
//class Derived :public Base {
//public:
//	void display(int x) {
//		cout << "Display of Derived" << endl;
//	}
//
//	void display() {
//		cout << "Display of Derived" << endl;
//	}
//};
//
//
///*Polymorphism*/
//
////Abstract class because it has virtual functions
////Can create only pointers in order to achieve polymorphism
//
//
///* If base class has all concrete functions, then the purpose of that basic class is to achieve reusability
//(Called Abstract) If base class has some concrete functions and some virutal, then the purpose is to achieve reusability and polymorphism
//(Called Abstract -> Interface) If base class hall only virtual functions, then the purpose is to achieve polymorphism
//*/
//class Car {
//public:
//	virtual void start() = 0; // pure virtual function (used to achieve polymorphism), all derived classes must override the function
//	virtual void stop() = 0; // pure virtual function (used to achieve polymorphism), all derived classes must override the function
//};
//
//class Dacia : public Car {
//	void start() {
//		cout << "Dacia started" << endl;
//	}
//
//	void stop() {
//		cout << "Dacia stopped" << endl;
//	}
//};
//
//class Renault : public Car {
//	void start() {
//		cout << "Renault started" << endl;
//	}
//	
//	void stop() {
//		cout << "Renault stopped" << endl;
//	}
//};
//
//int main() {
//
//	Base b;
//	Derived d;
//	b.display();
//	d.Base::display();
//	d.display(2);
//
//	cout << "\n************************************\n";
//	cout << "Using 'virtual' in Base display() function...calling display() via Base class Pointer with Derived() class object...\n";
//	Base* p = new Derived();
//	p->display();
//
//	Base* ptr = &b;
//	ptr->display();
//	cout << "\n************************************\n";
//	
//	//Car car; //can't create object 'car' because the Car class is abstract
//	Car* pcar = new Dacia();
//	pcar->start();
//	pcar->stop();
//
//	pcar = new Renault();
//	pcar->start();
//	pcar->stop();
//
//}