//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	Time(int, int, int); //构造函数，实现初始化
//	friend void display(Time&); //友元函数声明
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//Time::Time(int h, int m, int s)
//{
//	hour = h;  minute = m;  sec = s;
//}
//void display(Time& t) //友元函数访问类内private成员
//{
//	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
//}
//int main()
//{
//	Time t1(10, 13, 56);
//	display(t1);
//	return 0;
//}
