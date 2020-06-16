//#include <iostream>
//
//using namespace std;
//
//template<class T, class S>
//auto test(T value1, S value2) -> decltype(value1 + value2) {
//	return value1 + value2;
//}
//
//int get() {
//	return 999;
//}
//auto test2() -> decltype(get()) {
//	return get();
//}
//
//int main() {
//
//	auto value = 1;
//	//auto text = "hello";
//
//	cout << value << endl;
//	cout << test(5,6) << endl;
//
//	cout << test2() << endl; 
//	return  0;
//
//}