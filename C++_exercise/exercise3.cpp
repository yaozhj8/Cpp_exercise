//�������new��delete���ڽṹ���͵����ӡ�
#include <iostream>
#include <string.h>
struct person {
	char name[20];
	int age;
};
int main()
{
	person* p;
	p = new person; //���new int
	strcpy_s(p->name, "����");//�ַ�������
	p->age = 23;
	std::cout << p->name << " " << p->age << std::endl;
	delete p;
	return 0;
}
