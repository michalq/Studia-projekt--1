#pragma once

#include "Data.h"
#include <iostream>
#include <string.h>

class Pracownik
{
public:
	Pracownik(char* imie = "brak", char* nazwisko = "brak", int dzien = 1, int miesiac = 1, int rok = 1970);
	virtual ~Pracownik();
    int static siLiczPrac;
	const char* Imie() const;
	const char* Nazwisko() const;
	const Data DataUrodzenia() const;

	void Imie(const char*);
	void Nazwisko(const char*);
	void DataUrodzenia(int d, int m, int r);

	void Wypisz() const;
	void Wpisz();
	bool SprawdzImie(const char* por_imie) const;
	bool SprawdzNazwisko(const char* por_nazwisko) const;
private:
	char *pszImie;
	char *pszNazwisko;
	Data dataUrodzenia;
};
