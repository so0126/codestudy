#include <iostream>
using namespace std;

//class FruitSeller
//{
//private:
//	int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//public:
//	void InitMembers(int price, int num, int money)
//	{
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//	}
//	int SaleApples(int money)
//	{
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//	void ShowSalesResult()
//	{
//		cout << "남은 사과: " << numOfApples << endl;
//		cout << "판매 수익: " << myMoney<<endl << endl;
//	}
//};
//
//class FruitBuyer
//{
//	int myMoney;
//	int numOfApples;
//public:
//	void InitMembers(int money)
//	{
//		myMoney = money;
//		numOfApples = 0;
//	}
//	void BuyApples(FruitSeller &seller, int money)
//	{
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//	void ShowBuyResult()
//	{
//		cout << "현재 잔액: " << myMoney << endl;
//		cout << "사과 개수: " << numOfApples << endl<<endl;
//	}
//};
//
//int main(void)
//{
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "과일 판매자의 현황" << endl;
//	seller.ShowSalesResult();
//	cout << "과일 구매자의 현황" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}
//
//class Point
//{
//public:
//	int x, y;
//};
//class Rectangle
//{
//public:
//	Point upLeft, lowRight;
//	void ShowRecInfo()
//	{
//		cout << "좌 상단: " << '[' << upLeft.x << ", ";
//		cout << upLeft.y << ']' << endl;
//		cout << "우 하단: " << '[' << lowRight.x << ", ";
//		cout << lowRight.y << ']' << endl;
//	}
//};
//
//int main(void)
//{
//	Point pos1 = { -2,4 };
//	Point pos2 = { 5, 9 };
//	Rectangle rec = { pos2, pos1 };
//	rec.ShowRecInfo();
//	return 0;
//}

//class SinivelCap
//{
//public:
//	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
//};
//
//class SneezeCap
//{
//public:
//	void Take() const { cout << "재채기가 멎습니다." << endl; }
//};
//
//class SnuffleCap
//{
//public:
//	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
//};
//
//class ColdPatient
//{
//public:
//	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
//	void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
//	void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
//};
//
//int main(void)
//{
//	SinivelCap scap;
//	SneezeCap zcap;
//	SnuffleCap ncap;
//
//	ColdPatient sufferer;
//	sufferer.TakeSinivelCap(scap);
//	sufferer.TakeSneezeCap(zcap);
//	sufferer.TakeSnuffleCap(ncap);
//	return 0;
//}
//
//class SinivelCap
//{
//public:
//	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
//};
//
//class SneezeCap
//{
//public:
//	void Take() const { cout << "재채기가 멎습니다." << endl; }
//};
//
//class SnuffleCap
//{
//public:
//	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
//};
//
//class CONTAC600
//{
//private:
//	SinivelCap sin;
//	SneezeCap sne;
//	SnuffleCap snu;
//public:
//	void Take() const
//	{
//		sin.Take();
//		sne.Take();
//		snu.Take();
//	}
//};
//
//class ColdPatient
//{
//public:
//	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
//};
//
//int main(void)
//{
//	CONTAC600 cap;
//	ColdPatient sufferer;
//	sufferer.TakeCONTAC600(cap);
//	return 0;
//}

//class SimpleClass
//{
//private:
//	int num1, num2;
//public:
//	SimpleClass()
//	{
//		num1 = 0;
//		num2 = 0;
//	}
//
//	SimpleClass(int n)
//	{
//		num1 = n;
//		num2 = 0;
//	}
//	SimpleClass(int n1, int n2)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//	/*
//	SimpleClass(int n1 = 0, int n2 = 0)
//	{
//		num1 = n1;
//		num2 = n2;
//	}	
//	*/
//	void ShowData() const
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//
//};
//
//int main(void)
//{
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	SimpleClass sc3(100,200);
//	sc3.ShowData();
//	return 0;
//}

//class SimpleClass
//{
//private:
//	int num1, num2;
//public:
//	SimpleClass(int n1 = 0, int n2 = 0)
//	{
//		num1 = n1;
//		num2 = n2;
//	}
//	void ShowData() const
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	SimpleClass sc1();
//	SimpleClass mysc = sc1();
//	mysc.ShowData();
//	return 0;
//}
//
//SimpleClass sc1()
//{
//	SimpleClass sc(20, 30);
//	return sc;
//}

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney<<endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;
public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller &seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl<<endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}