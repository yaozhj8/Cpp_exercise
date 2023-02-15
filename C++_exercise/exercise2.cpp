//#include<iostream>
//using namespace std;
//
//class Array_max
//{
//public:
//	void set_value();
//	void max_value();
//	void show_value();
//
//private:
//	int max;
//	int arr[10];
//};
//
//void Array_max::set_value() {
//	for (int i = 0; i < 10; i++){
//		cin >> arr[i];
//	}
//}
//
//void Array_max::max_value() {
//	max = arr[0];
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] > max){
//			max = arr[i];
//		}
//	}
//}
//
//void Array_max::show_value(){
//	cout << "max=" << max;
//}
//
//int main(){
//	Array_max  arrmax;//定义对象
//	arrmax.set_value();//向对象发消息
//	arrmax.max_value();
//	arrmax.show_value();
//	return 0;
//}
