#include <iostream>
#include <locale.h>
#include <limits>

using namespace std;

void polisch();
void temp_text_0();
void temp_text_1();
int choise_function();
float degree_function();
float result_function(int a, float b);

int main()
{
    float degree;
    int choise;
    polisch();
    temp_text_0();
    choise = choise_function();
    degree = degree_function();
    result_function(choise, degree);
    return 0;
}

void polisch() // daje polskie znaki
{
    setlocale(LC_CTYPE, "Polish");
}

void temp_text_0() // wyświetla text, który widzimy tylko raz
{
    cout << " Jaka temperatura u cb wariacie? " << endl;
    cout << " Najpierw zapodaj czy w Celsjuszach czy w Fahrenheitach? " << endl;
}

void temp_text_1() // wyświetla text do wyboru jaka temp
{
    cout << " Jeżeli lubisz Celsjusza wpisz 1 " << endl;
    cout << " Jeżeli lubisz Fahrenheita wpisz 2 " << endl;
    cout << " ";
}

int choise_function()
{
    int a;
    for (int i = 1; i > 0; i++)
    {
        temp_text_1();
        cin >> a;
        if (a == 1 || a == 2)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return a;
}

float degree_function()
{
    int b;
    while (cout << " Tera co ci termometr pokazuje? " && !(cin >> b))
	{
		cout << "To nie jest liczba chłopie \n";
		cin.clear();  // czyści błąd
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignoruje nie numeryczne wejścia
	}
	return b;
}

float result_function(int a, float b)
{
 float result;
    if( a == 1 )
        {
            cout << " Twoja temperatura wynosi " << b << " °C " << endl;
            result = 1.8 * b + 32.0;
            cout << " Twoja temperatura w Fahrenheitach wynosi " << result << " °F " << endl;
        }
    else if( a == 2 )
        {
            cout << " Twoja temperatura wynosi " << b << " °F " << endl;
            result = (b - 32.0)/1.8;
            cout << " Twoja temperatura w Celsjuszach wynosi " << result << " °C " << endl;
        }
 return result;
}