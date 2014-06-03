#ifndef SZKOLA_H
#define SZKOLA_H

class Szkola
{
    public:
        Szkola(char*);
        virtual ~Szkola();
        int DodajNauczyciela(const Nauczyciel &);
        void UsunNauczyciela(int n);
        int Znajdz(const char *);
        void Wyswielt(int n);
        void Lista();
        char* NazwaSzkoly();


    private:
        Nuczyciel nauczyciele[20];
        int ile; // licznik obiektów klasy nauczyciel
        char* nazwa_szkoly;
};

#endif // SZKOLA_H
