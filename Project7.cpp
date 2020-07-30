#include <iostream>

using namespace std;

//int main(void)
//{
//    int val1, val2;
//    int result = 0;
//    cout << "두 개의 숫자입력: ";
//    cin >> val1 >> val2;
//
//    if (val1 < val2)
//    {
//        for (int i = val1 + 1; i < val2; i++)
//            result += i;
//    }
//
//    else
//    {
//        for (int i = val2 + 1; i < val1; i++)
//            result += i;
//    }
//
//    cout << "두 수 사이의 정수 합: " << result << endl;
//    return 0;
//}

//void swap(int * a,int * b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
//void swap(char * a, char * b) {
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(double * a, double * b) {
//	double temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(void)
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	cout << num1 << ' ' << num2 << endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	cout << ch1 << ' ' << ch2 << endl;
//
//	double dbl1 = 1.1111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	cout << dbl1 << ' ' << dbl2 << endl;
//}

//int BoxVolume(int a)
//{
//	return a;
//}
//
//
//int BoxVolume(int a, int b)
//{
//	return a * b;
//}
//
//int BoxVolume(int a, int b, int c)
//{
//	return a * b * c;
//}
//
//int main(void)
//{
//	cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << endl;
//	cout << "[5,5,D]: " << BoxVolume(5,5) << endl;
//	cout << "[7,D,D]: " << BoxVolume(7) << endl;
//	return 0;
//
//}
#include "Header.h"

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}