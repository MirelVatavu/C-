//#include <iostream>
//#include <string>
//using namespace std;
//
//class Employee {
//private:
//	int id;
//	string name;
//public:
//	Employee(int id = 0, string name = "") {
//		this->id = id;
//		this->name = name;
//	}
//	void setName(string name) {
//		this->name = name;
//	}
//	string getName() { return name; }
//	void setId(int id) {
//		this->id = id;
//	}
//	int getId() { return id; }
//
//};
//
//class FullTimeEmployee : public virtual Employee {
//private:
//	float salary;
//public:
//	FullTimeEmployee() = default;
//	FullTimeEmployee(int id, string name, float salary = 0):Employee(id,name) {
//		setId(id);
//		setName(name);
//		this->salary = salary;
//	}
//
//	float getSalary() { return salary; }
//	void setSalary(float salary) {
//		this->salary = salary;
//	}
//};
//class PartTimeEmployee : public FullTimeEmployee {
//private:
//	float dailyWages;
//public:
//	PartTimeEmployee() = default;
//	PartTimeEmployee(int id, string name, float dailyWage):Employee(id, name) {
//		this->dailyWages = dailyWage;
//	}
//	float getDailyWages() { return dailyWages; }
//	void setDailyWages(float dailyWage) {
//		this->dailyWages = dailyWage;
//	}
//};
//
//int main() {
//	FullTimeEmployee ftE(1, "Kazuky", 17232.31f);
//	PartTimeEmployee ptE(2, "Shiro", 113.2f);
//
//	cout << "Salary of " << ftE.getName() << " is " << ftE.getSalary() << '\n';
//	cout << "Daily wage of " << ptE.getName() << " is " << ptE.getDailyWages() << '\n';
//}