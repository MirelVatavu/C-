//#include <iostream>
//using namespace std;
//
//
//class Base {
//public:
//	int a;
//	void display() {
//		cout << "Display of Base " << a <<'\n';
//	}
//	Base() {
//		cout << "Non-param Base" << '\n';
//	}
//	Base(int a) {
//		cout << "Param Base " << a << '\n';
//	}
//};
//
//class Derived : public Base {
//public:
//	void show() {
//		cout << "Show of derived" << '\n';
//	}
//
//	Derived() {
//		cout << "Non-param Derived" << '\n';
//	}
//
//	Derived(int x) {
//		cout << "Param Derived " << x << '\n';
//	}
//
//	Derived(int a, int x) : Base(a) {
//		cout << "Param Derived " << x << '\n';
//	}
//};
//
//class Rectangle {
//private:
//	int length;
//	int breadth;
//public:
//	Rectangle() = default;
//	Rectangle(int l, int b);
//	Rectangle(Rectangle& r);
//	int getLength() { return length; }
//	int getBreadth() { return breadth; }
//	void setLength(int l);
//	void setBreadth(int b);
//	int area();
//	int perimeter();
//	bool isSquare();
//	//~Rectangle();
//};
//
//
//class Cuboid : public Rectangle {
//private:
//	int height;
//public:
//	Cuboid(int h) {
//		if (h >= 1) {
//			this->height = h;
//		}
//		else {
//			this->height = 1;
//		}
//
//	}
//
//	//constructor of parent class Rectangle(l,b) is executed first then it goes into height
//	Cuboid(int l, int b, int h) : Rectangle(l,b) {
//		this->height = h;
//	}
//	void setHeight(int h);
//	int getHeight() { return height; }
//	int volume();
//};
//
//
//// Ways of inheritance
//
//class Parent {
//private: int a;
//protected: int b;
//public: int c;
//	  void funParent() {
//		  a = 10;
//		  b = 5;
//		  c = 15;
//	  }
//
//};
//// public, protected or private;
////Public = accessible to all other classes that inherit the main class + objects that are created
////Protected = accessible only to classes, not accessible by objects
////Private = not accessible by classes or objects
//class Child :public Parent {
//public:
//	void funChild() {
//		//a = 10;
//		b = 5;
//		c = 15;
//	}
//};
//
//class GrandChild :public Child {
//public:
//	void funGrandChild() {
//		//a = 10;
//		b = 5;
//		c = 15;
//	}
//};
//
//int main() {
//	//Derived d;
//	//d.a = 100;
//	//d.display();
//	//d.show();
//
//	Rectangle r1(5,10);
//	cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << '\n';
//	
//	Cuboid c1(2, 5, 10);
//
//	cout << "Area: " << c1.area() << " Perimeter: " << c1.perimeter() << " Volume: " << c1.volume() << '\n';
//
//
//	Derived d1, d2(5), d3(20,10);
//
//
//	Child c;
//	//c.a = 10;
//	//c.b = 15;
//	c.c = 20;
//}
//
//Rectangle::Rectangle(int l, int b) {
//	this->length = l;
//	this->breadth = b;
//}
//Rectangle::Rectangle(Rectangle& r) {
//	this->length = r.length;
//	this->breadth = r.breadth;
//}
//void Rectangle::setLength(int l) {
//	this->length = l;
//}
//void Rectangle::setBreadth(int b) {
//	this->breadth = b;
//}
//int Rectangle::area() {
//	return length * breadth;
//}
//int Rectangle::perimeter() {
//	return 2 * (length + breadth);
//}
//bool Rectangle::isSquare() {
//	return length == breadth;
//}
//
//void Cuboid::setHeight(int h) {
//	if (h >= 1) {
//		this->height = h;
//	}
//	else {
//		this->height = 1;
//	}
//
//}
//int Cuboid::volume() {
//	return getLength() * getBreadth() * height;
//}