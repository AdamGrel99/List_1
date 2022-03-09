#include <iostream>
#include <locale.h>
#include <limits>
#include <conio.h>

using namespace std;

int kalkulator_prosty ();

int main()
{
    setlocale(LC_CTYPE, "Polish");
    kalkulator_prosty ();
    return 0;
}

int kalkulator_prosty ()
{
    float a;
    float b;
    char dzialanie;
    cout << "Kalkulator byczka do prostych dzia³añ." << endl;
    for (int i = 0; true ; i++)
    {
        while (cout << "Podaj pierwsz¹ liczbê " && !(cin >> a))
        {
            cout << "To nie jest liczba ziomek \n";
            cin.clear();  // czyœci b³¹d
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignoruje nie numeryczne wejœcia
        }
        cout << "Jakie dzia³anie ma wykonaæ + , - , * czy / : ";
        cin >> dzialanie;
        while (cout << "Podaj drug¹ liczbê " && !(cin >> b))
        {
            cout << "To nie jest liczba ziomek \n";
            cin.clear();  // czyœci b³¹d
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignoruje nie numeryczne wejœcia
        }
        switch( dzialanie )
        {
        case '+':
            cout << "Wynik = " << a + b << endl;
            break;
        case '-':
            cout << "Wynik = " << a - b << endl;
            break;
        case '*':
            cout << "Wynik = " << a * b << endl;
            break;
        case '/':
            cout << "Wynik = " << a / b << endl;
            break;
        default:
            cout << "Miales jedno proste zadanie byczku" << endl;
            break;
        }
        cout << endl << "Naciœnij Enter by zakoñczyæ program" << endl << endl;
        if (getch() == 13) return 0;
    }
}