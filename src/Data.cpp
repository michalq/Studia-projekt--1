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
	this->Koryguj();
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
	std::cin >> d >> m >> r;
	this->Ustaw(d,m,r);
}

void Data::Koryguj()
{
    if (this->dzien > 31)
        this->dzien = 31;
    else if (this->dzien < 1)
        this->dzien = 1;

    if (this->miesiac > 12)
        this->miesiac = 12;
    else if (this->miesiac < 1)
        this->miesiac = 1;

    if (this->rok > 2014)
        this->rok = 2014;
    else if (this->rok < 1900)
        this->rok = 1900;
}

int Data::Porownaj(const Data& wzor)
{
	if (wzor.Dzien() == this->Dzien()
		&& wzor.Miesiac() == this->Miesiac()
		&& wzor.Rok() == this->Rok())
		return 1;
	return 0;
}
