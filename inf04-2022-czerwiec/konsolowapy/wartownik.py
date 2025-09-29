import random

def wygenerujLosowe(ileLiczb, zakres):
    return [random.randint(1, zakres) for x in range(ileLiczb)]

def znajdzLiczbe(table, x):
    i = 0
    while True:
        if table[i] == int(x):
            if i == len(table) - 1:
                return len(table) -1
            else:
                return i
        i = i + 1;


table = wygenerujLosowe(50, 100)
print(table)

x = input("Podaj szukaną liczbę: ")
table.append(int(x))

result = znajdzLiczbe(table, x);

if result == 50:
    print("nie znaleziono liczby (wartownik)");
else:
    print(f"jest na indexie {result}")

        
