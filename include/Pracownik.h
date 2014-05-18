#pragma once

#include "Data.h"
#include <iostream>
#include <string.h>

class Pracownik
{
public:
	Pracownik(void);
	const char* Imie() const;
	const char* Nazwisko() const;
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
