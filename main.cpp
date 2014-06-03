#include<iostream>
#include "Pracownik.h"

int Pracownik::siLiczPrac = 0;

int main()
{
	Pracownik jan;
	Pracownik unknown;

	jan.Imie("Jan");
	jan.Nazwisko("Kowalski");
	jan.DataUrodzenia(31, 5, 1993);

	std::cout << "Wpisz dane: \n";
	unknown.Wpisz();

    std::cout << std::endl;
	jan.Wypisz();
	std::cout << std::endl;
	unknown.Wypisz();
	std::cout << std::endl;

	if (jan.SprawdzImie(unknown.Imie()))
		std::cout << "\nImiona sa takie same.";
	else
		std::cout << "\nImiona sa rozne.";

	if (jan.SprawdzNazwisko(unknown.Nazwisko()))
		std::cout << "\nNazwiska sa takie same.";
	else
		std::cout << "\nNazwiska sa rozne.";

    std::cout << "\n\nUtworzonych pracownikow: " << Pracownik::siLiczPrac << "\n\n";

    jan.~Pracownik();
    unknown.~Pracownik();

	return 0;
}
