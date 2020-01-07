/// Suma cyfr liczby ca³kowitej
/// JG scorpio
/// Data: 2020-01-07

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int liczba, reszta, suma = 0;
    cin >> liczba;
    while (liczba > 0){
        reszta = liczba % 10;
        suma = reszta + suma;
        liczba = liczba /= 10;


    }
    cout << suma;


}
