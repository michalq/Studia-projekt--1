#pragma once

#include "Data.h"
#include <iostream>
#include <string.h>

class Pracownik
{
public:
	Pracownik(char*, char*, int, int, int);
	virtual ~Pracownik();

	const char* Imie() const;
	const char* Nazwisko() const;
	const char* NrDomu() const;
	const Data DataUrodzenia() const;
	const char* Miasto() const;
	const char* Ulica() const;

	void Imie(const char*);
	void Nazwisko(const char*);
	void DataUrodzenia(int d, int m, int r);
	void NrDomu(const char*);
	void Ulica(const char*);
	void Miasto(const char*);

	void Wypisz() const;
	void Wpisz();
	bool SprawdzImie(const char* por_imie) const;
	bool SprawdzNazwisko(const char* por_nazwisko) const;
private:
	char *pszImie;
	char *pszNazwisko;
	Data dataUrodzenia;
	char *ulica;
	char *nrDomu;
	char *miasto;
};
