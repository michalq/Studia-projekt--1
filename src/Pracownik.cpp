#include "Pracownik.h"

Pracownik::Pracownik(void)
{
	this->Imie("brak");
	this->Nazwisko("brak");
	this->DataUrodzenia(1, 1, 1970);
}

const char* Pracownik::Imie() const
{
	return this->pszImie;
}

const char* Pracownik::Nazwisko() const
{
	return this->pszNazwisko;
}

void Pracownik::Imie(const char* imie)
{
    if (this->pszImie != NULL)
    {
        delete[] this->pszImie;
        this->pszImie = NULL;
    }
    this->pszImie = new char [strlen(imie)];
	strcpy(this->pszImie, imie);
}

void Pracownik::Nazwisko(const char* nazwisko)
{
    //delete this->pszNazwisko;
    this->pszNazwisko = new char [strlen(nazwisko)];
	strcpy(this->pszNazwisko, nazwisko);
}

void Pracownik::DataUrodzenia(int d, int m, int r)
{
	this->dataUrodzenia.Ustaw(d, m, r);
}

void Pracownik::Wypisz() const
{
	std::cout << this->Imie() << "\t";
	std::cout << this->Nazwisko() << "\t";
	this->dataUrodzenia.Wypisz();
}

void Pracownik::Wpisz()
{
	char imie[25];
	char nazwisko[30];
	std::cin >> imie;
	std::cin >> nazwisko;
	this->Imie(imie);
	this->Nazwisko(nazwisko);
}

bool Pracownik::SprawdzImie(const char* por_imie) const
{
	return ! strcmp(this->Imie(), por_imie);
}

bool Pracownik::SprawdzNazwisko(const char* por_nazwisko) const
{
	return ! strcmp(this->Nazwisko(), por_nazwisko);
}
