#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<vector<int>> losowanie;

bool sprawdzLiczby(int liczba, int zestaw) {
    for (int i = 0; i < losowanie[zestaw].size(); i++) {
        if (losowanie[zestaw][i] == liczba) {
            return false;
        }
    }
    return true;
}

void losujLiczby(int ile) {
    losowanie.resize(ile);
    for (int i = 0; i < ile; i++) {
        for (int j = 0; j < 6; j++) {
            int liczba;
            bool unikalna = false;
            while (!unikalna) {
                liczba = rand() % 49 + 1;
                unikalna = sprawdzLiczby(liczba, i);
            }
            losowanie[i].push_back(liczba);
        }
    }
}



void wypiszliczby() {
    for (vector<int> zestaw : losowanie) {
        for (int liczba : zestaw) {
            cout << liczba << " ";
        }
        cout << endl;
    }
}

void liczLiczby() {
    for (int i = 1; i <= 49; i++) {
        int licznik = 0;
        for (vector<int> zestaw : losowanie) {
            for (int liczba : zestaw) {
                if (liczba == i) {
                    licznik++;
                }
            }
        }
        cout << "Liczba " + to_string(i) + " wypadla " + to_string(licznik) + " razy" << endl;
    }
}

int main() {
    srand(time(NULL));
    int ile;
    cout << "Podaj ile liczb chcesz wylosowac: ";
    cin >> ile;

    losujLiczby(ile);
    wypiszliczby();
    liczLiczby();

    return 0;
}
