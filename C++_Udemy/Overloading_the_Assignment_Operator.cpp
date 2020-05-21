//#include <iostream>
//using namespace std;
//
//class Test {
//	int id;
//	string name;
//public:
//	Test(int id, string name):id(id), name(name){}
//
//	void print() {
//		cout << id << ": " << name << endl;
//	}
//
//	const Test &operator=(const Test& orther) {
//		cout << "Assignment running" << endl;
//		id=orther.id;
//		name=orther.name;
//		return *this;
//	}
//	Test(const Test& orther) {
//		cout << "Copy constractor running" << endl;
//		*this = orther;
//	}
//};
//
//
//int main() {
//
//	Test test1(10, "Mike");
//	cout << "Print test1: " << flush;
//	test1.print();
//
//	Test test2 = test1;
//	cout << "Print test2: " << flush;
//	test2.print();
//
//	
//	Test test3 = test2;
//	test3.operator=(test2);
//	cout << "Print test3: " << flush;
//	test3.print();
//
//	cout << endl;
//
//	Test test4 = test1;
//	test4.print();
//
//	return 0;
//}