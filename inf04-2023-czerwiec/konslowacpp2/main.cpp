#include <iostream>
using namespace std;

/********************************
 nazwa klasy: Film
 pola:
    title - nazwa filmu
    Liczbawypozyczen - liczba wypozyczen filmu
 metody:
    setTitle - ustawia tytul filmu
    getTitle - zwraca tytul filmu
    getLiczbawypozyczen - zwraca liczbe wypozyc
    Inkrementacja - zwieksza liczbe wypozyczen o 1
 informacje: Aplikacja do zarzadzania wypozyczalnia filmow
 autor: 012

*********************************/


class Film {
    protected:
        string title;
        int Liczbawypozyczen = 0;
    public:
        void setTitle(string title) {
            this->title = title;
        };
        string getTitle() {
            return this->title;
        }
        int getLiczbawypozyczen() {
            return this->Liczbawypozyczen;
        }
        void Inkrementacja() {
            int temp = this->Liczbawypozyczen;
            this->Liczbawypozyczen = temp + 1;
        }
};

int main() {
    Film film;
    film.setTitle("film 1");
    cout << "Tytul filmu: " << film.getTitle() << endl;
    cout << "Liczba wypozyczen: " << film.getLiczbawypozyczen() << endl;
    film.Inkrementacja();
    cout << "Liczba wypozyczen po inkrementacji: " << film.getLiczbawypozyczen() << endl;



    return 0;
}
