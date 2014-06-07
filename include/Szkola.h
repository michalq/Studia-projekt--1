#pragma once

#include "Nauczyciel.h"

class Szkola
{
    public:
        Szkola(char*);
        virtual ~Szkola();
        int DodajNauczyciela(Nauczyciel *);
        void UsunNauczyciela(int n);
        int Znajdz(const char *);
        void Wyswietl(int n);
        void Lista();
        char* NazwaSzkoly();


    private:
        Nauczyciel *nauczyciele[20];
        int ile; // licznik obiektów klasy nauczyciel
        char* nazwa_szkoly;
};
