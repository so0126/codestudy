#include <iostream>
using namespace std;

//inline int SQUARE(int x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	cout << SQUARE(5) << endl;
//	cout << SQUARE(12) << endl;
//	return 0;
//}

//namespace BestComImpl
//{
//	void SimpleFunc(void)
//	{
//		cout << "BestCom이 정의한 함수" << endl;
//	}
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void)
//	{
//		cout << "ProgCom이 정의한 함수" << endl;
//	}
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}

//namespace BestComImpl
//{
//	void SimpleFunc(void);
//	void PrettyFunc(void);
//}
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	return 0;
//}
//
//void BestComImpl::SimpleFunc(void)
//{
//	cout << "BestCom" << endl;
//	PrettyFunc();
//	ProgComImpl::SimpleFunc();
//}
//
//void BestComImpl::PrettyFunc(void)
//{
//	cout << "so pretty" << endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	cout << "ProgCom" << endl;
//}

//namespace Hybrid
//{
//	void HybFunc(void)
//	{
//		cout << "So simple" << endl;
//		cout << "In namespace Hybrid" << endl;
//	}
//}
//
//int main(void)
//{
//	using Hybrid::HybFunc;
//	HybFunc();
//	return 0;
//}

// std::cin + std::cout + std::endl >> using namespace std

//int main(void)
//{
//	int num = 20;
//	cout << "Hello World" << endl;
//	cout << "Hello " << "World" << endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << endl;
//	return 0;
//}

//namespace AAA
//{
//	namespace BBB
//	{
//		namespace CCC
//		{
//			int num1, num2;
//		}
//	}
//}
//
//int main(void)
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC;
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//	return 0;
//}
//
//int main(void)
//{
//	int num = 10;
//	int i = 0;
//
//	cout << "true: " <<true<< endl;
//	cout << "false: " << false << endl;
//
//	while (true)
//	{
//		cout << i++ << ' ';
//		if (i > num)
//			break;
//	}
//		cout << endl;
//
//		cout << "sizeof 1: " << sizeof(1) << endl;
//		cout << "sizeof 0: " << sizeof(0) << endl;
//		cout << "sizeof true: " << sizeof(true) << endl;
//		cout << "sizeof false: " << sizeof(false) << endl;
//		return 0;
//	
//}

//bool IsPositive(int num)
//{
//	if (num < 0)
//		return false;
//	else
//		return true;
//}
//
//int main(void) {
//	bool isPos;
//	int num;
//	cout << "Input number: ";
//	cin >> num;
//
//	isPos = IsPositive(num);
//	if (isPos)
//		cout << "Positive number" << endl;
//	else
//		cout << "Negative number" << endl;
//	return 0;
//}

//int main(void)
//{
//	int num1 = 1020;
//	int &num2 = num1;
//	num2 = 3047;
//
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//	cout << "VAL: " << &num1 << endl;	
//	cout << "REF: " << &num2 << endl;
//
//	return 0;
//}

//int main(void)
//{
//	int arr[3] = { 1,3,5 };
//	int &ref1 = arr[0];
//	int &ref2 = arr[1];
//	int &ref3 = arr[2];
//	
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//}

//void SwqpByRef2(int& ref1, int& ref2)
//{
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void)
//{
//	int val1 = 10;
//	int val2 = 20;
//
//	SwqpByRef2(val1, val2);
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//	return 0;
//}

//int &RefRetFuncOne(int &ref)
//{
//	ref++;
//	return ref;
//}

//int main(void)
//{
//	int num1 = 1;
//	int &num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//반환값 상수 >> 함수의 반환값 반드시 변수에 저장 &num에 저장 XX
//int RefRetFuncOne(int& ref)
//{
//	ref++;
//	return ref;
//}
//
//
//int main(void)
//{
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1);
//
//	num1 += 1;
//	num2 += 100;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//지역변수 참조의 형태로 반환시 지역변수 없어짐 ㄴㄴ해

int main()
{
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}