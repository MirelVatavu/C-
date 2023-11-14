//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main() {
//
//	//char s[10] = "Hello";
//	//char s[] = "Hello";
//	//char s[] = {'H','e','l','l','o','\0', 'p', 'a', 's'};
//	//char s[] = { 65, 66, 67, 68, '\0' };
//	//string s = "Hello";
//	//cout << s << '\n';
//
//	//char s[100];
//	//char s2[100];
//	//cout << "Enter your name ";
//	////cin >> s; // stops at first space
//	////cin.get(s, 100); // reads everything up to 99 chars + 1 null char '\0' but skips net cin.get call 
//	//// because "Enter" key is taken by 2nd cin.get
//
//	//cin.getline(s, 100); // save as cin.get but doesn't skup next cin.getline
//	//cout << "Welcome " << s << '\n';
//
//	//cout << "Enter your name again";
//	////cin.get(s2, 100);
//	//cin.getline(s2, 100);
//	//cout << "Welcome " << s2 << '\n';
//
//
//	//// strlen
//	//char t[50] = "Hello";
//
//	//cout << strlen(t) << '\n';
//
//	//char *a = new char;
//	//cout << "Enter a string";
//	//cin.getline(a, 20);
//
//	//cout << strlen(a);
//
//	////strcat
//	//char firstString[50] = "Good", secondString[50] = "Morning";
//
//	//strcat(firstString, secondString);
//
//	//cout << firstString;
//	//cout << '\n';
//	//strncat(firstString, secondString, 2); // gets only first 2 chars from secondString
//	//cout << firstString;
//
//	////strcpy(destination, source) or strncpy(destination,source,length_to_be_copied_from_source)
//	//char* a = new char[50];
//
//	//char firstString[50] = "Good Morning";
//	//strcpy(a, firstString);
//
//	//cout << a << '\n';
//
//	//char b[50] = "";
//	//strncpy(b, firstString, 2);
//	//cout << b;
//
//	////strstr(main,sub) getting substring
//	//char a[20] = "Good Morning";
//	//char sub[20] = "z"; // "ood"
//
//	//if (strstr(a, sub) != NULL) {
//	//	cout << strstr(a, sub);
//	//}
//	//else {
//	//	cout << "Substring not found";
//	//}
//
//	////strchr(main, char) find a char in a string
//	//char a[50] = "Programming";
//	//cout << strchr(a, 'r') << '\n'; // takes first char from the left side
//	//cout << strrchr(a, 'r') << '\n'; // takes first char from the right side
//
//	////strcmp(str1, str2) returns based on dictionary
//	//char a[50], b[50];
//	//cout << "Enter first string: ";
//	//cin.getline(a, 50);
//	//cout << "Enter second string: ";
//	//cin.getline(b, 50);
//
//	//cout << strcmp(a, b);
//
//	////strtol(str1) , strtof(str1,NULL) : string to long, string to float
//	//char s1[10] = "235";
//	//char s2[10] = "52.51";
//
//	//long int x = strtol(s1, NULL, 10); // decimal 10, octal 8, binary 2
//	//float y = strtof(s2, NULL);
//
//
//	//cout << x+20 << '\n' << y-5 << '\n';
//
//	////strtok(str1,"=;"), key-value pair
//	//char s1[20] = "x=10;y=20;z=35";
//	//
//	//char  *token = strtok(s1, ";"); // "?" or any other token that does not exist in the string will give the entire string
//
//	//while (token != NULL) {
//	//	cout << token << '\n';
//	//	token = strtok(NULL, ";"); // "?" or any other token that does not exist in the string will give the entire string
//	//}
//
//	////String
//	//string str = "Hello";
//	//cout << str;
//
//	//string str1;
//	//cout << "Enter a string ";
//	//getline(cin, str1);
//	//cout << str1;
//	 
//	//// Functions
//	//string s = "Hello let's gooo";
//	//cout << "Length: " << s.length() << '\n' << "Size: " << s.size() << '\n' << "Capacity: " << s.capacity() << '\n'; //
//
//	//s.resize(50);
//
//	//cout << "Capacity after resize: " << s.capacity() << '\n';
//	//cout << "Max size: " << s.max_size() << '\n'; //
//
//	//if (s.empty()) {
//	//	cout << "String is empty\n";
//	//}
//	//else
//	//{	
//	//	cout << "String cleared\n";
//	//	s.clear();
//	//}
//
//	//if (s.empty()) {
//	//	cout << "String is empty\n";
//	//}
//	//else
//	//{
//	//	cout << "String cleared\n";
//	//	s.clear();
//	//}
//
//	//cout << "Length: " << s.length() << '\n';
//
//	//s.append("New string now :D");
//
//	//cout << s << '\n';
//	//s.append("Lets see how append works");
//	//cout << s << '\n';
//	//cout << "Capacity: " << s.capacity() << " Size: " << s.size() << " Length:" << s.length() << '\n';
//
//	//s.insert(3, "Inserted a sdas das das das das das dasd as dasd sad asd asd asd asda dsa das das das das", 20); // insert at given index, 3rd argument takes first 20 chars, can skip 3rd arg
//
//	//cout << s << '\n';
//	//cout << "Capacity: " << s.capacity() << " Size: " << s.size() << " Length:" << s.length() << '\n';
//
//	//s.replace(3, 8, "Replaced"); // replace between given indexes
//	//cout << s << '\n';
//
//	//s.erase(); //
//	//cout << s << '\n';
//	//cout << "Length: " << s.length() << '\n';
//
//	//s.append("Another string"); //
//	//cout << s << '\n';
//
//	//s.push_back('z'); //
//	//cout << s << '\n';
//
//	//s.pop_back(); //
//	//cout << s << '\n';
//
//	//string s2 = "How are you now? Better??";
//
//	//s.swap(s2);
//	//cout << "s: " << s << '\n';
//	//cout << "s2: " << s2 << '\n';
//
//	//char a[20] = "";
//
//	//s.copy(a, 2);
//	//cout << a << '\n';
//
//	//cout << s.find("are") << '\n'; // find index of first are
//	//cout << s.rfind("r") << '\n'; // find index right most r
//	//cout << s.find_first_of('e') << '\n'; // can also use string but it will look for individual letters
//	//cout << s.find_first_of("re") << '\n';
//	//cout << s.find_last_of('e') << '\n';
//
//	//cout << s.substr(4, 2) << '\n';
//
//
//	//string b = "Hellc";
//	//string c = "Hello";
//	//string concatenated = c + " world";
//	//cout << concatenated << '\n';
//
//	//cout << "Comparing "  << b << " with " << c << " = " << b.compare(c) << '\n';
//
//	//cout << "b.at(0) : " << b.at(0) << '\n'; // or b[0]
//
//	//b.at(0) = 'D'; // or b[0] = 'D';
//
//	//cout << b << '\n';
//
//	//cout << b.front() << '\n';
//	//cout << b.back() << '\n';
//
//	//b.at(0) ++;
//
//	//cout << b << '\n';
//
//	//// iterate through every letter of the string
//	//string::iterator it;
//	//for (it = b.begin(); it != b.end(); it++)
//	//{
//	//	*it = toupper(*it);
//	//}
//
//	//cout << b;
//	//cout << '\n';
//
//	//string::reverse_iterator rit;
//	//for (rit = b.rbegin(); rit != b.rend(); rit++) {
//	//	cout << *rit;
//	//}
//
//	//Getting the length of a string
//	string str = "WeLcoM3     To     CanDy  ShOp";
//	int count = 0;
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		count++;
//	}
//
//	cout << count << '\n';
//
//	int count_it = 0;
//
//	string::iterator it;
//	for (it = str.begin(); it != str.end(); it++)
//	{
//		count_it++;
//	}
//
//	cout << count_it << '\n';
//
//
//	// Convert string to upper case
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] < 65 && str[i] > 90) {
//			str[i] = str[i] - 32; // or toupper()
//		}
//
//	}
//
//	cout << str << '\n';
//
//
//	// Convert string to lower case
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] > 65 && str[i] < 90)
//		{
//			str[i] = str[i] + 32; // or tolower()
//		}
//	}
//
//	cout << str << '\n';
//
//	// count vowels, consonants, words
//
//	int vowels = 0, consonants = 0, words = 1;
//
//
//	for (int i = 0; str[i] != '\0'; i++) {
//
//		char temp = tolower(str[i]);
//		while (str[i] == ' ')
//		{	
//			if (str[i] != '\0')
//			{
//				i++;
//			}
//		}
//
//
//		if (temp == ' ') {
//			words++;
//		}
//
//		if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
//			vowels++;
//		}
//		else{
//			if (temp != ' ') {
//				consonants++;
//			}
//
//		}
//	}
//
//	cout << "Words = " << words << " ; Vowels = " << vowels << " ; Consonants = " << consonants << '\n';
//
//
//
//	string isPalindrome = "", reversed_string = "";
//	
//	cout << "Enter word to check if it is Palindrome: ";
//	getline(cin, isPalindrome);
//
//	string::reverse_iterator rit;
//
//	for (rit = isPalindrome.rbegin(); rit != isPalindrome.rend(); rit++) {
//		reversed_string += *rit;
//	}
//
//
//	if (isPalindrome.compare(reversed_string) == 0)
//	{
//		cout << isPalindrome << " is palindrome" << '\n';
//	}
//	else
//	{
//		cout << isPalindrome << " is not palindrome" << '\n';
//	}
//
//
//	// Find username from email address
//
//	string username = "", email = "";
//
//	cout << "Enter an email: ";
//	getline(cin, email);
//
//	string::iterator itd;
//
//	for (itd = email.begin(); itd != email.end(); itd++) {
//		if (*itd == '@'){
//			break;
//		}
//		else {
//			username += *itd;
//		}
//
//	}
//
//	cout << "The username is: " << username << '\n';
//
//
//	return 0; 
//}