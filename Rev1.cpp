#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
//
//class FruitSeller
//{
//private:
//	const int APPLE_PRICE;
//	int numOfApples, myMoney;
//public:
//	FruitSeller(int price, int num, int money)
//		: APPLE_PRICE(price), numOfApples(num), myMoney(money)
//	{
//
//	}
//	int SaleApples(int money)
//	{
//
//	}
//	void ShowSalesResult() const
//	{
//
//	}
//
//};
//
//class FruitBuyer
//{
//private:
//	int myMoney, numOfApples;
//public:
//	FruitBuyer(int money)
//		:myMoney(money), numOfApples(0)
//	{
//
//	}
//	void BuyApples(FruitSeller& seller, int money)
//	{
//
//	}
//	void ShowBuyResult() const
//	{
//
//	}
//};
//
//int main(void)
//{
//
//}

//class AAA
//{
//public:
//	AAA()
//	{
//		cout << "empty object" << endl;
//	}
//	void ShowYourName()
//	{
//		cout << "I'm class AAA" << endl;
//	}
//};
//
//class BBB
//{
//private:
//	AAA& ref;
//	const int num;
//public:
//	BBB(AAA& r, const int& n)
//		:ref(r), num(n)
//	{
//
//	}
//	void ShowYourName()
//	{
//		ref.ShowYourName();
//		cout << "and" << endl;
//		cout << "I ref num " << num << endl;
//	}
//};
//
//int main(void)
//{
//	AAA obj1;
//	BBB obj2(obj1, 20);
//	obj2.ShowYourName();
//	return 0;
//}

//class AAA
//{
//private:
//	int num;
//public:
//	AAA():num(0){}
//	AAA& CreateInitObj(int n) const
//	{
//		AAA* ptr = new AAA(n);
//		return *ptr;
//	}
//	void ShowNum() const { cout << num << endl; }
//private:
//	AAA(int n):num(n){}
//};
//
//int main(void)
//{
//	AAA base;
//	base.ShowNum();
//
//	AAA& obj1 = base.CreateInitObj(3);
//	obj1.ShowNum();
//
//	AAA& obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	delete& obj1;
//	delete& obj2;
//	return 0;
//
//}

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
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
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
//	Person man1("LEE dong woo", 29);
//	Person man2("Jang dong gun", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}
//
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
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//	void SetPersonInfo(char* myname, int myage)
//	{
//		name = myname;
//		age = myage;
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름: " << name << ", ";
//		cout << "나이: " << age << endl;
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
//	Person parr[3];
//	char namestr[100];
//	char* strptr;
//	int age, len;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름: ";
//		cin >> namestr;
//		cout << "나이: ";
//		cin >> age;
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//
//	parr[0].ShowPersonInfo();
//	parr[1].ShowPersonInfo();
//	parr[2].ShowPersonInfo();
//	return 0;
//}

//int main(void)
//{
//	Person* parr[3];
//	char namestr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름: ";
//		cin >> namestr;
//		cout << "나이: ";
//		cin >> age;
//		parr[i] = new Person(namestr, age);
//	}
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//	return 0;
//}

//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "num=" << num << ",";
//		cout << "address=" << this << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer()
//	{
//		return this;
//	}
//};
//
//int main(void)
//{
//	SoSimple sim1(100);
//	SoSimple* ptr1 = sim1.GetThisPointer();
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple* ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//	return 0;
//}

//class TwoNumber
//{
//private:
//	int num1, num2;
//public:
//	TwoNumber(int num1, int num2)
//	{
//		this->num1 = num1;
//		this->num2 = num2;
//	}
//	void ShowTwoNumber()
//	{
//		cout << this->num1 << endl;
//		cout << this->num2 << endl;
//	}
//};
//
//int main(void)
//{
//	TwoNumber two(2, 4);
//	two.ShowTwoNumber();
//	return 0;
//}

//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) :num(n)
//	{
//		cout << "객체생성" << endl;
//	}
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//
//int main(void)
//{
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//	
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//}

const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
	int accID;
	int balance;
	char* cusName;
public:
	Account(int ID, int money, char* name)
		: accID(ID), balance(money)
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	int GetAccID() { return accID; }
	void Deposit(int money)
	{
		balance += money;
	}
	int Withdraw(int money)
	{
		if (balance < money)
			return 0;
		balance -= money;
		return money;
	}
	void ShowAllAccInfo()
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이 름: " << cusName << endl;
		cout << "잔 액: " << balance << endl;
	}
	~Account()
	{
		delete[]cusName;
	}
};

Account* accArr[100];
int accNum = 0;

int main(void)
{
	int choice;
	while (1)
	{
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;
		defalut:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}

void ShowMenu(void)
{
	cout << "------Menu--------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;

}
void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoeny(void)
{
	int money;
	int id;
	cout << "입 금" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID" << endl << endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "출 금" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "출금액: "; cin >> money;
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)

		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID" << endl << endl;

}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAllAccInfo();
		cout << endl;
	}
}