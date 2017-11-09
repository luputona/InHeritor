#pragma warning(disable : 4996)
#include<iostream>
#include<cstring>
using namespace std;
class Food1
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

class Fruit1 : public Food1
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
	void SetPrice(int myPrice)
	{
		Food1::SetPrice(myPrice - 20);
	}
private:
	char m_farmName[50];
};

void main3()
{
	Food1 myFood;
	Fruit1 myFruit;

	myFood.SetPrice(100); //Food의 SetPrice()
	myFruit.SetPrice(200); // Fruit의 Setprice()

	cout << "my Food의 Price = " << myFood.Getprice() << endl;
	cout << "my Fruit의 Price = " << myFruit.Getprice() << endl;
}