#ifndef __MENU_H_
#define __MENU_H_

#include <iostream>
using namespace std;

class MENU
{
	int MENU_KIND;
	int MENU_PRICE;
public:
	void InitMembers(int kind)
	{
		MENU_KIND = kind;
		
	}
	int SaleMenu(int num)
	{
		int cost;
		switch (MENU_KIND)
		{
		case 1:
			//햄버거
			MENU_PRICE = 3000;
		case 2:
			//감튀
			MENU_PRICE = 1200;
		case 3:
			//콜라
			MENU_PRICE = 2000;
		case 4:
			//세트
			MENU_PRICE = 4900;
		case 5:
			//아이스크림
			MENU_PRICE = 1000;

		}
		cost = MENU_PRICE * num;
		return cost;
	}
};
#endif
