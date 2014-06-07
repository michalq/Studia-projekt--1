#include "Szkola.h"

Szkola::Szkola(char* nazwa)
{
    this->nazwa_szkoly = new char [strlen(nazwa)];
    strcpy(this->nazwa_szkoly, nazwa);
    for (int i = 0; i < 20; i++)
    {
        this->nauczyciele[i] = NULL;
    }
}

Szkola::~Szkola()
{
    delete [] nazwa_szkoly;
    delete [] nauczyciele;
}

/**
 * dodaje w pierwsze wolne miejsce tablicy przekazany obiekt,
 * zwraca numer miejsca w tablicy (od 1 do 20) lub 0 jeśli tablica była pełna
 */
int Szkola::DodajNauczyciela(Nauczyciel *ob)
{
    for (int i = 0; i < 20; i++)
    {
        if (this->nauczyciele[i] == NULL)
        {
            this->nauczyciele[i] = ob;
            this->ile++;
            return this->ile;
        }
    }
    return 0;
}
/**
 * Usuwa nauczyciela z pozycji n-tej
 */
void Szkola::UsunNauczyciela(int n)
{
    n--;
    if (this->nauczyciele[n] != NULL)
    {
        this->nauczyciele[n] = NULL;
    }
}
/**
 * Zwraca numer (pozycję w tablicy - od 1 do 20) nauczyciela o podanym nazwisku
 * lub 0 kiedy nie znajdzie
 */
int Szkola::Znajdz(const char *nazwisko)
{
    for (int i = 0; i < 20; i++)
    {
        if (this->nauczyciele[i] != NULL && strcmp(nazwisko, this->nauczyciele[i]->Nazwisko()))
            return i+1;
    }
    return 0;
}
/**
 * Wyświetla dane nauczyciela jak metody Tablica() z klasy Nauczyciel
 */
void Szkola::Wyswietl(int n)
{
    n--;
    if (this->nauczyciele[n] != NULL)
    {
        this->nauczyciele[n]->Tabela();
    }
    else
        std::cout << "Nie ma takiego nauczyciela.\n";
}

char* Szkola::NazwaSzkoly()
{
    return this->nazwa_szkoly;
}

/**
 * Wyświetla nazwę szkoły, a poniżj stabelaryzowaną listę danych wszystkich nauczycieli
 */
void Szkola::Lista()
{
    std::cout << this->NazwaSzkoly() << "\n";
    std::cout << "Nauczyciele:\n";
    for (int i = 1; i <= 20; i++)
    {
        if (this->nauczyciele[i-1] != NULL)
        {
            this->Wyswietl(i);
            std::cout << "\n";
        }
    }
}
