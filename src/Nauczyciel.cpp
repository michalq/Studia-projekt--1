#include "Nauczyciel.h"

Nauczyciel::Nauczyciel(char* imie = "brak", char* nazwisko = "brak", int dzien = 1, int miesiac = 1, int rok = 1970, char* przedmiot = "brak", double staz = 0)
: Pracownik(imie, nazwisko, dzien, miesiac, rok), przedmiot(przermiot), staz(staz)
{

}


virtual Nauczyciel::~Nauczyciel(void)
{
	delete [] przedmiot;
}

void Nauczyciel::Przedmiot(char *przedmiot)
{
	this->przedmiot = new char [strlen(przedmiot)];
	strcpy(this->przedmiot, przedmiot);
}

void Nauczyciel::Staz(double staz)
{
	this->staz = staz;
}

const char* Nauczyciel::Przedmiot() const
{
	return this->przedmiot;
}

double Nauczyciel::Staz() const
{
	return this->staz;
}

void Nauczycie::Wizytowka()
{
	std::cout	<< "Zawod: nauczyciel\n" <<
				<< "Imie i nazwisko:" << this->Imie() << " " << this->Nazwisko() << "\n"
				<< "Data urodzenia: " << this->DataUrodzenia().Wypisz() << "\n"
				<< "Dane dodatkowe: \n"
				<< "\tPrzedmiot: " << this->Przedmiot() << "\n"
				<< "\tStaz: " << this->Staz();
}

void Nauczyciel::Tabela()
{
	std::cout	<< "Nauczyciel\t|\t"
				<< this->Imie()
				<< " "
				<< this->Nazwisko()
				<< "\t|\t"
				<< this->DataUrodzenia().Dzien()
				<< "\t|\t"
				<< this->DataUrodzenia().Miesiac()
				<< "\t|\t"
				<< this->DataUrodzenia().Rok()
				<< "\t|\t"
				<< this->Przedmiot()
				<< "\t|\t"
				<< this->Staz()
				<< "\t|\t";
}
