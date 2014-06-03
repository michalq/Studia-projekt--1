#include "Pracownik.h"

Pracownik::Pracownik(char* imie = "brak", char* nazwisko = "brak", int dzien = 1, int miesiac = 1, int rok = 1970)
: pszImie(imie), pszNazwisko(nazwisko), dataUrodzenia(Data())
{

}

Pracownik::~Pracownik()
{
	delete [] pszImie;
	delete [] pszNazwisko;
	delete [] ulica;
	delete [] nrDomu;
	delete [] miasto;
}

const char* Pracownik::Imie() const
{
	return this->pszImie;
}

const char* Pracownik::Nazwisko() const
{
	return this->pszNazwisko;
}

const char* Pracownik::NrDomu() const
{
	return this->nrDomu;
}

const char* Pracownik::Miasto() const
{
	return this->miasto;
}

const char* Pracownik::Ulica() const
{
	return this->ulica;
}

const Data Pracownik::DataUrodzenia const()
{
	return this->dataUrodzenia;
}

void Pracownik::Imie(const char* imie)
{
    if (this->pszImie != NULL)
    {
        //delete[] this->pszImie;
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

void NrDomu(const char* nrDomu)
{
	this->nrDomu = new char [strlen(nrDomu)];
	strcpy(this->nrDomu, nrDomu);
}

void Ulica(const char* ulica)
{
	this->ulica = new char [strlen(ulica)];
	strcpy(this->ulica, ulica);
}

void Miasto(const char* miasto)
{
	this->miasto = new char [strlen(miasto)];
	strcpy(this->miasto, miasto);
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
