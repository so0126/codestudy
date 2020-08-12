#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class SoSimple
//{
//private:
//    int num1, num2;
//public:
//    SoSimple(int n1, int n2)
//        :num1(n1),num2(n2) {}
//    SoSimple(SoSimple& copy)
//        :num1(copy.num1), num2(copy.num2)
//    {
//        cout << "Called SoSimple(SoSimple &copy)" << endl;
//    }
//    void ShowSimpleData()
//    {
//        cout << num1 << endl;
//        cout << num2 << endl;
//    }
//};
//int main(void)
//{
//    SoSimple sim1(15, 30);
//    cout << "���� �� �ʱ�ȭ ����" << endl;
//    SoSimple sim2 = sim1;
//    cout << "���� �� �ʱ�ȭ ����" << endl;
//    sim2.ShowSimpleData();
//    return 0;
//}

//�̰� �� �ȵǴ�,,,,,,,class Person

//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//	}
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void)
//{
//	Person man1("Lee dong woo", 29);
//	Person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}

//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n){}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//	void ShowData()
//	{
//		cout << "num: " << num << endl;
//	}
//};
//void SimpleFuncObj(SoSimple ob)
//{
//	ob.ShowData();
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	cout << "�Լ�ȣ�� ��" << endl;
//	SimpleFuncObj(obj);
//	cout << "�Լ�ȣ�� ��" << endl;
//	return 0;
//}

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple(const SoSimple & copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
	obj.ShowData();
	return 0;
}