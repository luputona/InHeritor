#include<iostream>
#include<cstring>

class Phone
{
public:
	void Switch(int n)
	{
		m_On = n;
	}
private :
	int m_On;
};

class Printer
{
public:
	void Switch(int n)
	{
		m_On = n;
	}
private:
	int m_On;
};
class Fax : public Phone, public Printer
{
};

void main1()
{
	Fax myFax;
	myFax.Phone::Switch(1);
}