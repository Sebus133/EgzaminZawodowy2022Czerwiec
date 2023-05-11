
#include <iostream>
using namespace std;

int tablica[51];
bool czyZnaleziono;

void wypelnianie() {
    for (int i = 0;i < 50;i++) {
        tablica[i] = i;
    }

}

void wypisywanie() {
    for (int i = 0;i < 50;i++) {
        cout << tablica[i] << ",";


    }
}

int szukanie(int wartownik) {

    
    int index=0;
    for (int i = 0;i < 50;i++) {

        if (tablica[i] == wartownik && i!=51) {
            czyZnaleziono = true;
            index = i;
            break;
        }
        else if (tablica[i] == wartownik && i == 51) {
            czyZnaleziono = false;
            
        }
        else {
            czyZnaleziono = false;
            
        }
    }
    if (czyZnaleziono == true)
    {
        cout << "znaleziono liczbe, pod indeksem: " << index;
    }
    else {
        cout << "nie znaleziono liczby szukanej";
    }

    return index;
}



int main()
{
    int wartownik;
    wypelnianie();
    cout << "wpisz liczbe ktorej szukasz(wartownika): ";
    cin >> wartownik;
    tablica[51] = wartownik;
    wypisywanie();
    cout << endl;
    szukanie(wartownik);
  
    return 0;
}