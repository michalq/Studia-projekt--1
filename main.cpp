#include<iostream>
#include "Szkola.h"

int Pracownik::siLiczPrac = 0;

int main()
{
    Szkola prz("Politechnika Rzeszowska");
    /* 1 */ prz.DodajNauczyciela(new Nauczyciel("Jan", "Kowalski", 31, 5, 1990, "Matematyka", 99));
    /* 2 */ prz.DodajNauczyciela(new Nauczyciel("Zenon", "Zenobiusz", 1, 1, 1990, "Statystyka", 99));
    /* 3 */ prz.DodajNauczyciela(new Nauczyciel("Juliusz", "Cezar", 1, 1, 1990, "Geografia", 99));
    /* 4 */ prz.DodajNauczyciela(new Nauczyciel("Adam", "Nowak", 1, 1, 1990, "Biologia", 99));
    /* 5 */ prz.DodajNauczyciela(new Nauczyciel("Marek", "Antoniusz", 1, 1, 1990, "Kulturoznawstwo", 99));

    // Usuwamy Juliusza Cezara
    prz.UsunNauczyciela(3);

    // Sprawdzamy czy usunęło
    prz.Lista();
    std::cout << "\n\nBreak Line\n\n";
    // Dodajemy randomowego nauczyciela
    prz.DodajNauczyciela(new Nauczyciel("Jacek", "Random", 1, 1, 1990, "Zielarstwo", 99));

    // Sprawdzamy czy dodało, Jacek Random powinien być na 3 pozycji
    prz.Lista();
    /*
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
    */
	return 0;
}
