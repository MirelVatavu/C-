//#include <iostream>
//#include <string>
//
//using namespace std;
//class Car {
//public:
//	int height = 0, width = 0, windows = 0, kilometers = 0;
//	string color;
//	Car() = default;
//	Car(int h, int w, int win, string c) : height(h), width(w), windows(win), color(c) {
//
//	}
//	void Drive(int kms);
//};
//
//class InheritedCar: public Car {
//public:
//	string systemVersion = "v0.2";
//};
//
//void Car::Drive(int kms) {
//	kilometers += kms;
//}
//
//class Rectangle {
//public:
//	////default, not needed because parameterized Rectangle is having parameters initialized to 0
//	//Rectangle() {
//	//	length = 0;
//	//	breadth = 0;
//	//}
//
//	//constructors
//	//parameterized
//	Rectangle(int l = 0, int b = 0) {
//		setLength(l);
//		setBreadth(b);
//	}
//
//	//copy
//	Rectangle(Rectangle &r) {
//		length = r.length;
//		breadth = r.breadth;
//	}
//
//	//mutator
//	void setLength(int l) {
//		if (l >= 0) {
//			length = l;
//		}
//		else
//		{
//			cout << "Length can't be negative" << '\n';
//			length = 0;
//		}
//
//	}
//
//	void setBreadth(int breadth) {
//		if (breadth >= 0) {
//			this->breadth = breadth; // this->breadth is the private variable of the Rectangle class, breadth is the parameter given at the function
//		}
//		else {
//			cout << "Breadth can't be negative" << '\n';
//			breadth = 0;
//		}
//
//	}
//	//accessors
//	int getLength() {
//		return length;
//	}
//
//	int getBreadth() {
//		return breadth;
//	}
//	//facilitators
//	int Area() {
//		return length * breadth;
//	}
//
//	int Perimeter() {
//		return 2 * (length + breadth);
//	}
//
//	//enquiry
//	bool isSquare();
//
//	////destructor
//	//~Rectangle();
//
//private:
//	int length;
//	int breadth;
//};
//
////non-inline function, it's better to call them outside of the class if the functions are complex
////Rectangle::isSquare "::" is read scope resolution
//bool Rectangle::isSquare() {
//	return length == breadth;
//}
//
//
//class Student {
//private:
//	int roll;
//	string name;
//	int marks[3];
//public:
//	Student(int roll, string name, int mark1, int mark2, int mark3) {
//		setRoll(roll);
//		setName(name);
//		setMarks(mark1, mark2, mark3);
//	}
//
//	void setRoll(int roll) {
//		this->roll = roll;
//	}
//
//	void setName(string name) {
//		this->name = name;
//	}
//
//	void setMarks(int mark1 = 1, int mark2 = 1, int mark3 = 1) {
//
//		this->marks[0] = mark1;
//		this->marks[1] = mark2;
//		this->marks[2] = mark3;
//	}
//	int getRoll() {
//		return roll;
//	}
//	void getMarks() {
//		cout << "Marks are: " << '\n';
//
//		for (int i = 0; i < 3; i++) {
//			cout << marks[i] << '\n';
//		}
//	}
//
//	int totalMarks() {
//
//		int sum = 0;
//		for (int i = 0; i < 3; i++) {
//			sum += marks[i];
//		}
//
//		return sum;
//	}
//
//	float avgMarks() {
//		return (float) totalMarks() / 3;
//	}
//
//	char grade() {
//		float average = (float) totalMarks() / 3;
//		if (average > 60) {
//			return 'A';
//		}  
//		else if (average >= 40 && average < 60) {
//			return 'B';
//		}
//		else {
//			return 'C';
//		}
//	}
//};
//
//int main() {
//	//cout << "Car Class:" << '\n';
//	//Car car;
//	//car.height = 2350;
//	//car.width = 1350;
//	//car.windows = 8;
//	//car.color = "Blue";
//
//	//cout << car.height << '\n';
//
//	//Car newCar = Car(20, 26, 30, "Blue");
//
//	//cout << newCar.height << '\n';
//
//	//newCar.kilometers = 200;
//
//	//cout << newCar.kilometers << '\n';
//
//	//newCar.Drive(200);
//	//cout << newCar.kilometers << '\n';
//
//	//newCar.Drive(250);
//	//cout << newCar.kilometers << '\n';
//
//	//InheritedCar inheritedCar;
//	//inheritedCar.color = "Red";
//	//cout << inheritedCar.systemVersion << '\n';
//
//	//// Object created in heap
//	//InheritedCar* pCar = new InheritedCar();
//	//pCar->color = "Yellow";
//	//pCar->height = 50;
//	//pCar->width = 100;
//	//cout << "*pCar size = " << sizeof(pCar) << "; newCar size = " << sizeof(newCar) << '\n';
//
//	//cout << pCar->color << "\n\n\n";
//
//
//	//cout << "-------------------------------------------------------------------" << '\n';
//	//cout << "Rectangle Class:" << '\n';
//	//Rectangle r1, r2;
//
//	//r1.setLength(20);
//	//r1.setBreadth(20);
//	//r2.setLength(10);
//	//r2.setBreadth(15);
//
//	//cout << "Area r1 = " << r1.Area() << " Perimieter: " << r1.Perimeter() << '\n';
//	//cout << "Area r2 = " << r2.Area() << " Perimieter: " << r2.Perimeter() << '\n';
//
//	//Rectangle* pRec;
//	//pRec = &r1;
//
//	//pRec->setLength(12);
//
//	//cout << "Size of r1: " << sizeof(r1) << " Size of pRec: " << sizeof(pRec) << '\n';
//	//cout << "Area r1 = " << r1.Area() << " Perimieter: " << r1.Perimeter() << '\n';
//
//	//Rectangle* ppRec = new Rectangle(100, 100);
//
//	//cout << "Area ppRec : " << ppRec->Area() << '\n';
//
//	//Rectangle copyRect(*ppRec);
//
//	//copyRect.setBreadth(1);
//
//	//cout << "Area copyRect : " << copyRect.Area() << '\n';
//	//cout << "Area ppRec : " << ppRec->Area() << '\n';
//
//	//if (ppRec->isSquare()) {
//	//	cout << "ppRec Is square" << '\n';
//	//}
//
//	Student kazu(2, "Kazuky", 29, 30, 90);
//	cout<< "Avg: " << kazu.avgMarks() << " Grade: " <<kazu.grade() << '\n';
//
//
//	Student mir(2, "Mirel", 90, 90, 90);
//	cout << "Avg: " << mir.avgMarks() << " Grade: " << mir.grade() << '\n';
//
//	Student vas(2, "Vasile", 20, 25, 10);
//	cout << "Avg: " << vas.avgMarks() << " Grade: " << vas.grade() << '\n';
//	
//}