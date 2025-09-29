#include <iostream>
#include <stdlib.h>

using namespace std;

class Klasa {
    private:
        int* liczby;
        int liczbaElementow;
    public:
        Klasa(int rozmiar) {
            liczbaElementow = rozmiar;
            liczby = new int[rozmiar];
            for (int i = 0; i < 1000; i++) {
                liczby[i] = rand() % 1000 + 1;
            }
        }
        void wypisz() {
            for (int i = 0; i < liczbaElementow; i++) {
                cout << i << ": " << liczby[i] << endl;
            }
        }

        int wyszukajElement(int liczba) {
            for (int i = 0; i < liczbaElementow; i++) {
                if (liczby[i] == liczba) return i;
            }
            return -1;
        }

        int nieParzysta() {
            int suma = 0;
            cout << "Nie parzyste: " << endl;
            for (int i = 0; i < liczbaElementow; i++) {
                if (liczby[i] % 2 != 0) {
                    cout  << liczby[i] << endl;
                    suma++;
                }
            }
            return suma;
        }

        int sredniaArytmentyczna() {
            int suma = 0;
            for (int i = 0; i < liczbaElementow; i++) {
                suma = suma +  liczby[i];
            }

            suma = suma / liczbaElementow;
            return suma;
        }







};

int main() {
    srand(time(NULL));
    Klasa Klasa(50);
    Klasa.wypisz();
    cout << "Podaj liczbe do wyszukania: ";
    int liczba;
    cin >> liczba;
    int index = Klasa.wyszukajElement(liczba);

    if (index != -1) {
        cout << "Liczba znaleziona na pozycji: " << to_string(index) << endl;
    } else {
        cout << "Liczba nie znaleziona" << endl;
    }

    int nieParzysta = Klasa.nieParzysta();
    cout << "Suma nie parzystych elementow: " << to_string(nieParzysta) << endl;
    cout <<  "Srednia wszystkich elementow " << to_string(Klasa.sredniaArytmentyczna()) << endl;

}