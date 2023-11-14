//#include <iostream>
//
//using namespace std;
//
//
//// call by reference (modifies the parameter)
//void change_number(int &a) {
//	a = 30;
//}
//
//
//// call by address
//void swap_by_address(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//    
//}
//
//void swap_by_reference(int &a, int &b) {
//    int temp = a;
//    a = b;
//    b = temp;
//
//}
//
//
//
//// call by value (returns the result)
//int pow(int a, int b) {
//    int result = 1;
//
//    while (b > 0) {
//        result *= a;
//        b--;
//    }
//
//    return result;
//}
//
//
//int * fun_return_by_address(int size) {
//    int* p = new int[size];
//
//    for (int i = 0; i < size; i++) {
//        p[i] = i + 1;
//
//        cout << &p[i] << '\n';
//    }
//
//    return p;
//}
//
//int & fun_return_by_reference(int &x) {
//    return x;
//}
//// Function template
//template <class T>
//T Max(T x, T y) {
//    if (x > y)
//    {
//        return x;
//    }
//    else {
//        return y;
//    }
//}
//
//// default argument, z is optional
//int add(int x, int y, int z = 0) {
//    return x + y + z;
//}
//
//int maximum(int a = 0, int b = 0, int c = 0) {
//    return a > b && a > c ? a : b > c ? b : c;
//}
//
//void static_variable() {
//    static int v = 0; // static variable will be in the memory forever, but can only by accessed by this function
//
//    int a = 5;
//    v++;
//    cout << a << ' ' << v << '\n';
//}
//
//
//void recursive_fun(int n) {
//    if (n > 0) {
//        recursive_fun(n - 1);
//        cout << n << '\n';
//    }
//}
//
//int linear_search(int A[], int n, int key) {
//    for (int i = 0; i < n; i++)
//    {
//        if (key == A[i])
//        {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//void display() {
//    cout << "Hello" << '\n';
//}
//
//int Max_i(int a, int b) {
//    return a > b ? a : b;
//}
//
//int Min_i(int a, int b) {
//    return a < b ? a : b;
//}
//int main() {
//	int a = 3;
//    int b = 3;
//    int result = pow(a, b);
//    cout << result << '\n';
//	cout << a << '\n';
//
//	change_number(a);
//
//	cout << a << '\n';
//
//    int c = Max(a, b);
//    cout << c << ' ' << Max(3.1f, 5.1f) << '\n';
//
//    cout << add(2, 3) << ' ' << add(2, 3, 10) << '\n';
//
//    cout << maximum(20, 25, 30) << ' ' << maximum(26, 39) << ' ' << maximum(20, 1) << '\n';
//
//    cout << maximum() << ' ' << maximum(5) << ' ' << maximum(5, 10) << ' ' << maximum(5, 10, 20) << '\n';
//
//    int z = 5, y = 10;
//
//    swap_by_address(&z, &y);
//
//    cout << z <<' ' << y << '\n';
//
//    z = 5; 
//    y = 10;
//
//    swap_by_reference(z, y);
//
//    cout << z << ' ' << y << '\n';
//
//    int* ptr = fun_return_by_address(5);
//
//    for (int i = 0; i < 5; i++) {
//        cout << &ptr[i] << " = " << ptr[i] << '\n';
//    }
//
//    int e = 10;
//    fun_return_by_reference(e) = 25;
//
//    cout << e << '\n';
//
//    for (int i = 0; i < 10; i++) {
//        static_variable();
//    }
//
//
//
//    recursive_fun(5);
//
//
//    int k;
//    cout << "Enter element to be searched: ";
//    cin >> k;
//    int A[] = { 10, 20, 30, 40, 50 };
//    cout << "Index: " << linear_search(A, 5, k) << '\n';
//
//    // pointer to a function
//    void(*fp)(); // declaration
//    fp = display; // initialization
//    (*fp)(); // call
//    
//    int(*ffp)(int, int);
//    ffp = Max_i;
//    cout << (*ffp)(10, 20) << '\n';
//
//    ffp = Min_i;
//    cout << (*ffp)(10, 20) << '\n';
//}