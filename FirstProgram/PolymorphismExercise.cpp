//#include <iostream>
//
//using namespace std;
//
//class Shape {
//public:
//	virtual float area() = 0;
//	virtual float perimeter() = 0;
//};
//
//class Rectangle : public Shape {
//private:
//	float length, breadth;
//public:
//	Rectangle(float l, float b) {
//		length = l;
//		breadth = b;
//	}
//
//	float area() {
//		return length * breadth;
//	}
//
//	float perimeter() {
//		return 2 * (length + breadth);
//	}
//};
//
//class Circle : public Shape {
//private:
//	float radius;
//public:
//	Circle(float r) {
//		radius = r;
//	}
//
//	float area() {
//		return 3.14f * radius * radius;
//	}
//
//	float perimeter() {
//		return 2 * 3.14f * radius;
//	}
//};
//
//
//int main() {
//	Shape* pShape = new Rectangle(20, 10);
//	cout << "Area of Rectangle: " << pShape->area() << " Perimeter: " << pShape->perimeter() << endl;
//
//	pShape = new Circle(15);
//	cout << "Area of Circle: " << pShape->area() << " Perimeter: " << pShape->perimeter() << endl;
//
//}