#pragma warning (disable : 4996)
#include<iostream>
#include<cstring>
using namespace std;

class Food
{
public:
	void SetPrice(int myprice)
	{
		m_price = myprice;
	}
	int Getprice()
	{
		return m_price;
	}
private:
	int m_price;
};

class Fruit : public Food
{
public:
	void SetFarmName(const char *farm)
	{		
		strcpy_s(m_farmName, farm);
	}
	char *GetFarmName()
	{
		return m_farmName;
	}
	void PrintPrice()
	{
		cout << "price = " << Getprice() << endl;
		//cout << "Farm_name = " << GetFarmName() << endl;
	}
private:
	char m_farmName[50];
};
class Snac : public Food
{
	//
};

void main2()
{
	/* @1
	Fruit myFruit;
	myFruit.SetPrice(150);
	//cout << "price  = " << myFruit.Getprice() << endl;
	myFruit.PrintPrice();
	myFruit.SetFarmName("마씨쁠 농장");

	cout << "Farm_name = " << myFruit.GetFarmName() << endl;
	*/

	/*@2
	Food myFood;
	Fruit myFruit;

	//자식 오브젝트를 부모 오브젝트에 대입이 가능하다
	myFood = myFruit;

	//
	//myFruit = myFood;
	*/

	/* @3
	Food *pFood;
	Fruit myFruit;
	
	pFood = &myFruit;

	pFood->Getprice();
	pFood->SetPrice(10);
	*/

	Food *pFood[2];
	Fruit myFruit;
	Snac mySnack;

	pFood[0] = &myFruit;
	pFood[1] = &mySnack;

	for (int i = 0; i < 2; i++)
	{
		//기본 클래스의 포인터를 사용하여 Fruit Snack의 포인터 함수
		//SetPrice()를 호출함.
		pFood[i]->SetPrice(100 * (i + 1));
		cout << "price = " << pFood[i]->Getprice() << endl;
	}

}