//#include <iostream>
//
//using namespace std;
//
//class Parent {
//	int dogs{ 5 };
//	string text{ "hello" };
//
//public:
//	Parent() : Parent("hello") {
//		cout << "No paramater parent constructor" << endl;
//	}
//	Parent(string text) {
//		//cout << text << endl;
//		cout << "String parent constructor" << endl;
//	}
//};
//
//class Child :public Parent {
//public:
//	Child() = default;
//	
//};
//
//int main() {
//
//	Parent parent("hello");
//	Child child;
//
//	return 0;
//}