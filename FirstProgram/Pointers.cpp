//#include <iostream>
//
//using namespace std;
//
//// A pointer is a variable which is used for storing the address of data.
//
//int main() {
//
//	//int x = 10;
//	//int *p; // declaration
//	//p = &x; // initialization
//
//	//cout << "value of x: " << x << '\n';
//	//cout << "address of x: " << &x << '\n';
//	//cout << "address of x via pointer: " << p << '\n';
//	//cout << "address of pointer:"  << &p << '\n';
//	//cout << "value of x via pointer: " << *p << '\n'; // dereferencing
//
//	//int a[5] = { 1,2,3,4,5 }; //created in stack
//	//int *newp = new int[5]; // created in heap
//	//int *pa = a;
//	//for (int i = 0; i < 6; i++, pa++)
//	//{
//	//	cout << "Value of a using pointer pa : " << *pa;
//	//	cout << "	Address of a: " << &a;
//	//	cout << "	Address of a via pa: " << pa;
//	//	cout << '\n';
//	//}
//	//newp[0] = 20;
//	//newp[1] = 50;
//	//
//	//cout << "\nAddress of newp: " << &newp << '\n';
//
//	//cout << newp[0] << ' ' << newp[1] << '\n';
//
//	//delete [] newp;
//	//newp = nullptr;
//
//	//cout << "Address of newp after deletion: " << &newp << '\n';
//
//	// Pointers arithmethics
//	// Suppose we have an array a[5];
//	// *p = a;
//	// 1. p ++; // movees to the next address
//	// 2. p --; // moves to previous address
//	// 3. p = p + 2; //moves to +2 addresses
//	// 4. p = p - 2; //moves to -2 addresses
//	// 5. Suppose we have *q = &a[2];
//	// d = p - q; // gives the distance between 2 poineters.
//
//
//	//int A[] = { 2,4,6,8,10,12 };
//	//int* p = A, *q = &A[4];
//
//	//cout << p << '\n';
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cout << *(p+i)<< '\n'; // *p address doesn't change but if we use p++ instead of *(p+i), the pointer address will change
//	//}
//	//cout << p << '\n';
//
//	//cout << q - p << '\n'; // 4 elements away from each other
//	//cout << p - q << '\n'; // -4 = second pointer is far away and first pointer is in from of the second pointer
//
//	// Reference
//
//	int x = 10; // x memory allocated at 200/201
//	int &y = x; // reference (another name for x) // does not occupy any memory
//	cout << x << '\n';
//	x++;
//	cout << x << '\n';
//	y++;
//	cout << x << '\n';
//	cout << y << '\n';
//}