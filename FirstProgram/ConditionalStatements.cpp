//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//
//	//int a{}, b{};
//
//	//cout << "Enter 2 numbers: ";
//	//cin >> a >> b;
//
//	//if (a > b) {
//	//	cout << a << " is bigger";
//	//}
//	//else {
//	//	cout << b << " is bigger";
//	//} 
//
//	// Leap years
//	bool tryYears = true;
//
//	while (tryYears) {
//		cout << "Year: ";
//		int year{};
//		cin >> year;
//
//		if (year % 4 == 0)
//		{	
//			if (year % 100 == 0)
//			{	
//				if (year % 400 == 0)
//				{
//					cout << year << " is leap year";
//				}
//				else {
//					cout << year << " is not leap year";
//				}
//
//			}
//			else {
//				cout << year << " is leap year";
//			}
//		}
//		else
//		{
//			cout << year << " is not leap year";
//		}
//
//		cout << '\n';
//
//		char moreYears;
//		cout << "More? Y\\N";
//		cin >> moreYears;
//
//		if (toupper(moreYears) != 'Y')
//		{
//			tryYears = false;
//		}
//
//	}
//
//
//
//
//	return 0;
//}