#include <iostream>

using namespace std;

int liczby[10];

void getLiczby() {
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe do indeksu " << i << ": ";
        cin >> liczby[i];
    }
}

void wypiszLiczby() {
    for (int liczba : liczby) {
        cout << liczba << " ";
    }
}

void sort() {
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (liczby[j] > liczby[j - 1]) {
                int box = liczby[j];
                liczby[j] = liczby[j - 1];
                liczby[j - 1] = box;
            }
        }
    }

}



int main() {
    getLiczby();
    wypiszLiczby();
    sort();
    cout << endl;
    wypiszLiczby();
    return 0;
}
