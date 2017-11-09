#pragma warning(disable : 4996)
#include<iostream>
#include<cstring>
using namespace std;

class Food2
{
public:
	//가상 함수
	virtual void SetPrice(int myprice)
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

class Fruit2 : public Food2
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
	virtual void SetPrice(int myPrice)
	{
		Food2::SetPrice(myPrice - 20);
	}
private:
	char m_farmName[50];
};

void main4()
{
	Food2 *pFood;
	Fruit2 myFruit;

	pFood = &myFruit;
	pFood->SetPrice(200);

	cout << "price = " << pFood->Getprice() << endl;

	

}