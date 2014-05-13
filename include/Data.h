#pragma once

#include <iostream>

class Data {
public:
	Data(void);
	~Data(void);
	int Dzien() const;
	int Miesiac() const;
	int Rok() const;
	void Ustaw(int, int, int);
	void Wypisz() const;
	void Wpisz();
	void Koryguj();
	int Porownaj(const Data& wzor);
private:
	int dzien;
	int miesiac;
	int rok;
};
