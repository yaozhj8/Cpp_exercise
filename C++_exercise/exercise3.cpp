//将运算符new和delete用于结构类型的例子。
#include <iostream>
#include <string.h>
struct person {
	char name[20];
	int age;
};
int main()
{
	person* p;
	p = new person; //类比new int
	strcpy_s(p->name, "张三");//字符串复制
	p->age = 23;
	std::cout << p->name << " " << p->age << std::endl;
	delete p;
	return 0;
}
