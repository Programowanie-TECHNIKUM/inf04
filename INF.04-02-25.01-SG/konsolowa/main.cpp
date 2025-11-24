#include <iostream>

using namespace std;

class Urzadzenie {
public:
    void wyswietlKomunikat(const string& komunikat) {
        cout << komunikat << endl;
    }
};

class Pralka : public Urzadzenie {
private:
    int numerPrania = 0;

public:
    int ustawNumerPrania(int nr) {
        if (nr >= 1 && nr <= 12) {
            numerPrania = nr;
        } else {
            wyswietlKomunikat("Podano zly numer w pralce");
            numerPrania = 0;
        }
        wyswietlKomunikat("Program zostal ustawiony");
        return numerPrania;
    }
};

class Odkurzacz : public Urzadzenie {
private:
    bool stanOdkurzacza = false;

public:
    void on() {
        if (!stanOdkurzacza) {
            stanOdkurzacza = true;
            wyswietlKomunikat("Odkurzacz włączono");
        } else {
        }
    }

    void off() {
        if (stanOdkurzacza) {
            stanOdkurzacza = false;
            wyswietlKomunikat("Odkurzacz wyłączono");
        } else {
            cout << "Odkuracz jest juz wylaczony" << endl;
        }
    }
};

int main() {
    Pralka pralka;
    Odkurzacz odkurzacz;

    int a;
    cout << "Podaj nr prania 1..12" << endl;
    cin >> a;
    cout << pralka.ustawNumerPrania(a) << endl;

    cout << endl << "Test odkurzacza:" << endl;
    odkurzacz.on();
    odkurzacz.on();
    odkurzacz.on();
    odkurzacz.on();


    odkurzacz.wyswietlKomunikat("Odkurzacz wyładował się");

    odkurzacz.off();
    odkurzacz.off();

    return 0;
}
