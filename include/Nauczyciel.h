#pragma once
#include "Pracownik.h"

class Nauczyciel : public Pracownik
{
private:
	char * przedmiot;
	double staz;
public:
	Nauczyciel(char* imie = "brak", char* nazwisko = "brak", int dzien = 1, int miesiac = 1, int rok = 1970,char* przedmiot = "brak", double staz = 0);
	// Konstruktor posiadaujacy parametry klasy Pracownik + dodatkowe
	virtual ~Nauczyciel(void);

	const char* Przedmiot() const;
	double Staz() const;

	void Przedmiot(char *przedmiot);
	void Staz(double Staz);

	Nauczyciel(char *przedmiot, double staz);
	void WprowadzDane();
	/* w ktrej naley wczyta z klawiatury dane do obydwu pl obiektu typu Nauczyciel (a take imie, nazwisko, dzien, miesiac, rok, ulice, numer domu i miasto)*/
	void Tabela();
	/* Nauczyciel|imie|nazwisko||dzien|miesiac|rok|przedmiot|staz */
	void Wizytowka();
	/*
	Zawod: nauczyciel
	Imie i nazwisko:
	Data urodzenia: dzien miesiac rok
	Dane kontaktowe: przedmiot, staz
	*/
};
