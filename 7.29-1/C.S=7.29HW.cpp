//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//#define ID_LEN 20
//#define MAX_SPD 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10
//
//struct Car
//{
//	char gamerID[ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState()
//	{
//		cout << "소유자ID: " << gamerID << endl;
//		cout << "연료량: " << fuelGauge << "%" << endl;
//		cout << "현재속도: " << curSpeed << "km/s" << endl;
//	}
//
//	void Accel()
//	{
//		if (fuelGauge <= 0)
//			return;
//		else
//			fuelGauge -= FUEL_STEP;
//
//		if (curSpeed + ACC_STEP >= MAX_SPD)
//		{
//			curSpeed = MAX_SPD;
//			return;
//		}
//		curSpeed += ACC_STEP;
//
//	}
//	void Break()
//	{
//		if (curSpeed < BRK_STEP)
//		{
//			curSpeed = 0;
//			return;
//		}
//		curSpeed -= BRK_STEP;
//	}
//};
//
//int main(void)
//{
//	Car run99 = { "run99",100,0 };
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//	Car sped77 = { "sped77",100,0 };
//	sped77.Accel();
//	sped77.Break();
//	sped77.ShowCarState();
//	return 0;
//}

//namespace CAR_CONST
//{
//	enum
//	{
//		ID_LEN =20,
//		MAX_SPD =200,
//		FUEL_STEP =2,
//		ACC_STEP =10,
//		BRK_STEP =10
//	};
//}
//
//struct Car
//{
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState()
//	{
//		cout << "소유자ID: " << gamerID << endl;
//		cout << "연료량: " << fuelGauge << "%" << endl;
//		cout << "현재속도: " << curSpeed << "km/s" << endl;
//	}
//
//	void Accel()
//	{
//		if (fuelGauge <= 0)
//			return;
//		else
//			fuelGauge -= CAR_CONST::FUEL_STEP;
//
//		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
//		{
//			curSpeed = CAR_CONST::MAX_SPD;
//			return;
//		}
//		curSpeed += CAR_CONST::ACC_STEP;
//
//	}
//	void Break()
//	{
//		if (curSpeed < CAR_CONST::BRK_STEP)
//		{
//			curSpeed = 0;
//			return;
//		}
//		curSpeed -= CAR_CONST::BRK_STEP;
//	}
//};
//
//int main(void)
//{
//	Car run99 = { "run99",100,0 };
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//	Car sped77 = { "sped77",100,0 };
//	sped77.Accel();
//	sped77.Break();
//	sped77.ShowCarState();
//	return 0;
//}

//namespace CAR_CONST
//{
//	enum
//	{
//		ID_LEN =20,
//		MAX_SPD =200,
//		FUEL_STEP =2,
//		ACC_STEP =10,
//		BRK_STEP =10
//	};
//}
//
//struct Car
//{
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState();
//	void Accel();
//	void Break();
//
//};
//
//void Car::ShowCarState()
//{
//	cout << "소유자ID: " << gamerID << endl;
//	cout << "연료량: " << fuelGauge << "%" << endl;
//	cout << "현재속도: " << curSpeed << "km/s" << endl;
//}
//
//void Car::Accel()
//{
//	if (fuelGauge <= 0)
//		return;
//	else
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//
//	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
//	{
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//
//}
//void Car::Break()
//{
//	if (curSpeed < CAR_CONST::BRK_STEP)
//	{
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= CAR_CONST::BRK_STEP;
//}
//
//int main(void)
//{
//	Car run99 = { "run99",100,0 };
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//	Car sped77 = { "sped77",100,0 };
//	sped77.Accel();
//	sped77.Break();
//	sped77.ShowCarState();
//	return 0;
//}

//const char ??? >> strcpy??

//namespace CAR_CONST
//{
//	enum
//	{
//		ID_LEN =20, MAX_SPD=200, FUEL_STEP=2,
//		ACC_STEP=10, BRK_STEP=10
//	};
//}
//
//class Car
//{
//private:
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//public:
//	void InitMembers(const char* ID, int fuel);
//	void ShowCarState();
//	void Accel();
//	void Break();
//};
//
//void Car::InitMembers(const char * ID, int fuel)
//{
//	strcpy(gamerID, ID);
//	fuelGauge = fuel;
//	curSpeed = 0;
//}
//
//void Car::ShowCarState()
//{
//	cout << "소유자ID: " << gamerID << endl;
//	cout << "연료량: " << fuelGauge << "%" << endl;
//	cout << "현재속도: " << curSpeed << "km/s" << endl;
//}
//
//void Car::Accel()
//{
//	if (fuelGauge <= 0)
//		return;
//	else
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//
//	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
//	{
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//
//}
//void Car::Break()
//{
//	if (curSpeed < CAR_CONST::BRK_STEP)
//	{
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= CAR_CONST::BRK_STEP;
//}
//
//int main(void)
//{
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//}

