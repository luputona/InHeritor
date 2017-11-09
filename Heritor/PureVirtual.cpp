#pragma warning(disable : 4996)
#include<iostream>
#include<cstring>
using namespace std;

class Food3
{
public:
	//순수 가상 함수
	virtual void SetPrice(int myprice) = 0;
	
	int Getprice()
	{
		return m_price;
	}
protected:
	int m_price;
};

class Fruit3 : public Food3
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
	virtual void SetPrice(int myprice)
	{
		m_price = myprice;
	}
private:
	char m_farmName[50];
};

class Fish : public Food3
{
public:
	virtual void SetPrice(int myprice)
	{
		m_price = myprice / 2;
	}
};


void main()
{
	Food3 *pFood;
	Fruit3 myFruit;
	Fish myFish;
	
	pFood = &myFruit;
	pFood->SetPrice(200);

	cout << "price = " << pFood->Getprice() << endl;

	pFood = &myFish;
	pFood->SetPrice(500);
	cout << "price = " << pFood->Getprice() << endl;
}