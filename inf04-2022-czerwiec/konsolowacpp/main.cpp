#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> generateRandomArray(int ileLiczb, int zakres) {
    vector<int> arr;
    for (int i = 0; i < ileLiczb; i++) {
        arr.push_back(rand() % zakres);
    }

    return arr;
}

int findIndex(vector<int> table, int x) {
    int i = 0;
    while (true) {
        if (table[i] == x) {
            if (i == table.size() - 1) {
                return table.size() - 1;
            } else {
                return i;
            }
        }
        i = i + 1;
    }
}

void writeToScreen(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    vector<int> table = generateRandomArray(50, 100);
    writeToScreen(table);

    int x;
    cout << "Podaj liczbe ";
    cin >> x;
    table.push_back(x);

    int result = findIndex(table, x);
    if (result == 50) {
        cout << "nie znaleziono liczby (wartownik) " << result;
    } else {
        cout << "znaleziono liczbe w indexie: " << result;
    }

    return 0;
}


