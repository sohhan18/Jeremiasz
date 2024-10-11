#include <iostream>
#include <cmath> // biblioteka dla potęgowania i pierwiastków

using namespace std;

void wyswietlMenu() {
    cout << "---------------------------------" << endl;
    cout << "Prosty Kalkulator" << endl;
    cout << "Wybierz operację:" << endl;
    cout << "1. Dodawanie (+)" << endl;
    cout << "2. Odejmowanie (-)" << endl;
    cout << "3. Mnożenie (*)" << endl;
    cout << "4. Dzielenie (/)" << endl;
    cout << "5. Potęgowanie (^)" << endl;
    cout << "6. Pierwiastek (sqrt)" << endl;
    cout << "7. Zakończ" << endl;
    cout << "---------------------------------" << endl;
}

int main() {
    int wybor;
    float liczba1, liczba2, wynik;

    do {
        wyswietlMenu();
        cout << "Wybierz opcję: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "Podaj pierwszą liczbę: ";
                cin >> liczba1;
                cout << "Podaj drugą liczbę: ";
                cin >> liczba2;
                wynik = liczba1 + liczba2;
                cout << "Wynik: " << wynik << endl;
                break;

            case 2:
                cout << "Podaj pierwszą liczbę: ";
                cin >> liczba1;
                cout << "Podaj drugą liczbę: ";
                cin >> liczba2;
                wynik = liczba1 - liczba2;
                cout << "Wynik: " << wynik << endl;
                break;

            case 3:
                cout << "Podaj pierwszą liczbę: ";
                cin >> liczba1;
                cout << "Podaj drugą liczbę: ";
                cin >> liczba2;
                wynik = liczba1 * liczba2;
                cout << "Wynik: " << wynik << endl;
                break;

            case 4:
                cout << "Podaj pierwszą liczbę: ";
                cin >> liczba1;
                cout << "Podaj drugą liczbę: ";
                cin >> liczba2;
                if (liczba2 != 0) {
                    wynik = liczba1 / liczba2;
                    cout << "Wynik: " << wynik << endl;
                } else {
                    cout << "Błąd! Dzielenie przez zero!" << endl;
                }
                break;

            case 5:
                cout << "Podaj podstawę: ";
                cin >> liczba1;
                cout << "Podaj wykładnik: ";
                cin >> liczba2;
                wynik = pow(liczba1, liczba2);
                cout << "Wynik: " << wynik << endl;
                break;

            case 6:
                cout << "Podaj liczbę: ";
                cin >> liczba1;
                if (liczba1 >= 0) {
                    wynik = sqrt(liczba1);
                    cout << "Wynik: " << wynik << endl;
                } else {
                    cout << "Błąd! Nie można wyciągnąć pierwiastka z liczby ujemnej!" << endl;
                }
                break;

            case 7:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nieprawidłowa opcja!" << endl;
        }
    } while (wybor != 7);

    return 0;
}
