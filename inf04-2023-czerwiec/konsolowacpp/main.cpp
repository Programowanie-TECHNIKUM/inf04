#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void wypisz(int arr[], int size, string s) {
    cout << s << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void losowanie(int arr[], int ile, int doIlu) {
    for (int i = 0; i < ile; i++) {
        arr[i] = rand() % doIlu;
    }
}

void sortowanie(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int arr[100];
    int ile = 100;

    losowanie(arr, ile, 100);

    wypisz(arr, ile, "Przed sortowaniem");
    sortowanie(arr, ile);
    wypisz(arr, ile, "Po sortowaniu");

    return 0;
}