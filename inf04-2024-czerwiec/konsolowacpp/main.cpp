#include <iostream>
using namespace std;

int zliczanieKostki(int kostki[], int n) {
    int licznik[7] = {0};
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (kostki[i] >= 1 && kostki[i] <= 6) {
            licznik[kostki[i]]++;
        }
    }
    for (int oczko = 1; oczko <= 6; oczko++) {
        if (licznik[oczko] >= 2) {
            suma += licznik[oczko] * oczko;
        }
    }
    return suma;
}

int losowanie(int n) {
    int kostki[10];
    for (int i = 0; i < n; i++) {
        int random = rand() % 6 + 1;
        cout << "Kostka " << i + 1 << ": " << random << endl;
        kostki[i] = random;
    }
    int suma = zliczanieKostki(kostki, n);
    return suma;
}

int liczbaKostek() {
    int n;
    do {
        cout << "Ile kostek chcesz wyrzucić? (3 - 10) ";
        cin >> n;
    } while (n < 3 || n > 10);
    return n;
}

int main() {
    srand(time(NULL));
    int n = liczbaKostek();
    while (true) {
        int liczbaLosowania = losowanie(n);
        cout << "Liczba uzyskanych punktow: " << liczbaLosowania << endl;
        cout << "Czy chcesz kontynuować? (t/n) ";
        string s;
        cin >> s;
        if (s == "n") {
            break;
        }
    }
    return 0;
}
