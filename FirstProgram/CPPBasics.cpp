//#include <iostream>
//#include <string>
//#include <math.h>
//
//using namespace std;
//#define PI 3.14
//
//typedef struct {
//    int a;
//    int b;
//}numbers;
//
//typedef int marks;
//typedef int rollno;
//
//enum departments {
//    CS,
//    ECE,
//    IT,
//    CIVIL
//};
//
//int main()
//{
//    //cout << "Hello World!\n";
//
//    //// Just some string output
//    //cout << "What is your name?";
//    //string name{};
//    //getline(cin, name);
//
//    //cout << "Hello " << name << " give me 2 lucky numbers\n";
//
//    //int a{}, b{};
//    //cin >> a >> b;
//
//    //cout << "a + b = " << a + b << '\n';
//
//    //// Increment operators ( ++i will increment i first and do the 2 * 6, i++ will do the 2 * 6 then increment i) -> result should be
//    //// i = 7, j = 24
//
//    //int i = 5, j;
//
//    //j = 2 * ++i + 2 * i++;
//
//    //cout << i << "  " << j << '\n';
//
//
//    //// Overflow
//    //char x = 127;
//
//    //cout << (int) x << endl;
//
//    //x++;
//    //cout << (int)x;
//     
//    //// Bitwise Operators
//    
//    //int x = 11, y = 5, z;   // x = 0000 0000 0000 1011; 
//    //                        // y = 0000 0000 0000 0101;
//    //z = x & y;              // z = 0000 0000 0000 0001; z = 1
//    //cout << z << '\n';
//
//    //z = x | y;              // z = 0000 0000 0000 1111; z = 15
//    //cout << z << '\n';
//
//    //z = x ^ y;              // z = 0000 0000 0000 1110; z = 14
//    //cout << z << '\n';
//
//    //z = x << 1;             // z = 0000 0000 0001 0110; z = 22 // or z = x * i^2
//    //cout << z << '\n';
//
//    //z = y >> 1;             // z = 0000 0000 0000 0010; z = 2 // or z = y / i^2
//    //cout << z << '\n';
//
//    //z = ~x;                 // z = 1111 1111 1111 0100; We need to convert into 2's complements -> 0000 0000 0000 1011
//    //                        //                                                                                      +1
//    //                        //                                                                     1000 0000 0000 1010 -> z = -12
//    //cout << z << '\n';      // Most significant bit (most left bit) doesn't change so it remains 1 which gives the sign '-'
//
//    // Enum and Typede
//
//    //departments dep;
//    //dep = CS;
//
//    //if (dep == CS)
//    //{
//    //    cout << "Your department is CS\n";
//    //}
//
//    //marks m1{}, m2{}, m3{};
//    //rollno r1{}, r2{}, r3{};
//
//    //numbers nrs;
//    //nrs.a = 20;
//    //nrs.b = 10;
//
//    //cout << nrs.a << ' ' << nrs.b;
//
//    // Calculate Area of Circle
//
//    double area{}, radius{};
//
//    cout << "What's the radius of the circle?";
//    cin >> radius;
//
//    area = PI * pow(radius, 2);
//
//    cout << "Area of the circle is: " << area;
//
//    //return 0;
//}
//
