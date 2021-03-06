#include <iostream>
using namespace std;

void wyswietlMenu() {
    cout << "\n1. Pokaz obie macierze" << endl;
    cout << "2. Dodaj obie macierze" << endl;
    cout << "3. Pomnoz macierze" << endl;
    cout << "4. Pomnoz macierze przez wektor" << endl;
    cout << "5. Wprowadz macierze" << endl;
    cout << "0. Wyjdz\n" << endl;
}

void tworzenieMacierzy3x3(float macierz[3][3]) {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> macierz[i][j];
        }
    }
}

void drukowanieMacierzy3x3(float macierz[3][3]) {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
}

void dodawanieMacierzy(float macierzA[3][3], float macierzB[3][3]) {

    float macierzC[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            macierzC[i][j] = macierzA[i][j] + macierzB[i][j];
        }
    }

    cout << "WYNIK:" << endl;
    drukowanieMacierzy3x3(macierzC);
}

void mnozenieMacierzy(float macierzA[3][3], float macierzB[3][3]) {

    float macierzC[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int temp = 0;
            for(int k = 0; k < 3; ++k) {
                temp += macierzA[i][k] * macierzB[k][j];
            } 
            macierzC[i][j] = temp;  
        }
    }

    cout << "WYNIK:" << endl;
    drukowanieMacierzy3x3(macierzC);
}

void mnozenieMacierzyPrzezWektor(float macierz[3][3]) {

    float wektor[3];
    float wynik[3];

    cout << "Wprowadz wyrazy wektora:" << endl;
    for(int i = 0; i < 3; i++) {
        cin >> wektor[i];
    }

    for(int i = 0; i < 3; i++) {
        int temp = 0;
        for(int j = 0; j < 3; j++) {
            temp += wektor[j] * macierz[i][j];
        }
        wynik[i] = temp;
    }

    cout <<"\nWYNIK:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << wynik[i] << endl;
    }   
}

int main() {

    bool flaga = true;
    while(flaga) {

        float macierz1[3][3];
        float macierz2[3][3];

        cout << "Wprowad?? wyrazy macierzy 1:" << endl;
        tworzenieMacierzy3x3(macierz1);

        cout << "Wprowad?? wyrazy macierzy 2:" << endl;
        tworzenieMacierzy3x3(macierz2);

        bool flagaOperacji = true;
        while(flagaOperacji) {

            wyswietlMenu();

            int wyborOperacji;
            cin >> wyborOperacji;

            switch(wyborOperacji) {
                case 1: 
                    cout << "MACIERZ_1:" << endl;
                    drukowanieMacierzy3x3(macierz1);
                    cout << "\nMACIERZ_2:" << endl;
                    drukowanieMacierzy3x3(macierz2);
                    break;
                case 2:
                    dodawanieMacierzy(macierz1, macierz2);
                    break;
                case 3:
                    mnozenieMacierzy(macierz1, macierz2);
                    break;
                case 4:
                    mnozenieMacierzyPrzezWektor(macierz1);
                    cout << endl;
                    mnozenieMacierzyPrzezWektor(macierz2);
                    break;
                case 5:
                    flagaOperacji = false;
                    break;
                case 0:
                    cout << "do zobacznia" << endl;
                    flagaOperacji = false;
                    flaga = false;
                    break;
                default: 
                    cout << "operacja niewspierana" << endl;
                    break;
            }  
        }
    }

    return 0;
}