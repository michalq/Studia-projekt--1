#include "Data.h"

Data::Data(void)
{
}

Data::~Data(void)
{
}

int Data::Dzien() const
{
	return this->dzien;
}

int Data::Miesiac() const
{
	return this->miesiac;
}

int Data::Rok() const
{
	return this->rok;
}

void Data::Ustaw(int d, int m, int r)
{
	this->dzien = d;
	this->miesiac = m;
	this->rok = r;
}

void Data::Wypisz() const
{
	std::cout << ((this->Dzien()<10)?"0":"");
	std::cout << this->Dzien() << '.';
	std::cout << ((this->Miesiac()<10)?"0":"");
	std::cout << this->Miesiac() << '.';
	std::cout << this->Rok();
}

void Data::Wpisz()
{
	int d, m, r;
	do
	{
		std::cin >> d >> m >> r;
	}while(!(d <= 31 && d > 0 && m <=12 && m > 0));

	this->Ustaw(d,m,r);
}

void Data::Koryguj()
{

}

int Data::Porownaj(const Data& wzor)
{
	if (wzor.Dzien() == this->Dzien()
		&& wzor.Miesiac() == this->Miesiac()
		&& wzor.Rok() == this->Rok())
		return 1;
	return 0;
}
