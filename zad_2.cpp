#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generacja_tab ();
int Max_value (int tab []);
int Min_value (int tab []);
float srednia_aryt (int tab []);
float srednia_aryt_rec (int tab[], int i);
int mniej (float a, int tab []);
int wiek (float a, int tab []);
void wspak (int tab []);
void sortowanie_babelkowe(int tab[]);

int main()
{
    int tab[10];
    srand( time( NULL ) );

    for (int i = 0; i < 10; i++)
    {
        tab[i] =(rand() % 21 ) - 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << " ";
    }

    cout << endl << "Maksymalna wartość tablicy = " << Max_value (tab);
    cout << endl << "Minimalna wartość tablicy = " << Min_value (tab);
    cout << endl << "Średnia arytmetyczna tablicy = " << srednia_aryt(tab);
    cout << endl << "Średnia arytmetyczna tablicy = " << srednia_aryt_rec(tab, 9);
    cout << endl << "Mniejszych od średniej arytmatycznej jest = " << mniej(srednia_aryt(tab),tab);
    cout << endl << "Większych od średniej arytmatycznej jest = " << wiek(srednia_aryt(tab),tab);
    cout << endl;
    wspak (tab);
    cout << endl;
    sortowanie_babelkowe(tab);
    cout << endl;
    return 0;
}

int Max_value (int tab [])
{
    int result;
    result = tab [0];
    for (int i = 1; i < 10; i++)
    {
        if (result < tab [i])
        {
            result = tab [i];
        }
    }
    return result;
}

int Min_value (int tab [])
{
    int result;
    result = tab [0];
    for (int i = 1; i < 10; i++)
    {
        if (result > tab [i])
        {
            result = tab [i];
        }
    }
    return result;
}

float srednia_aryt (int tab [])
{
    float result = 0;
    for (int i = 0; i < 10; i++)
    {
        result = result + tab[i];
    }
    result = result / 10;
    return result;
}

float srednia_aryt_rec(int tab[], int i)
{
    if (i==0)
    {
        return tab[i]/10.0;
    }
    else
        return tab[i]/10.0 + srednia_aryt_rec(tab,i-1);
}

int mniej (float a, int tab [])
{
    int zmniej_mnie;
    zmniej_mnie = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] < a)
        {
            zmniej_mnie++;
        }
    }
    return zmniej_mnie;
}

int wiek (float a, int tab [])
{
    int dodaj_wiek;
    dodaj_wiek = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] > a)
        {
            dodaj_wiek++;
        }
    }
    return dodaj_wiek;
}

void wspak (int tab [])
{
    int pap [10];
    for (int i = 0; i < 10; i++)
    {
       pap [i] = tab [9 - i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << pap[i] << " ";
    }
}

void sortowanie_babelkowe(int tab[])
{
	for(int i=0;i<10;i++)
		for(int j=1;j<10-i;j++) //pętla wewnętrzna
		if(tab[j-1]>tab[j])
			swap(tab[j-1], tab[j]); //zamiana miejscami

    for(int i=0;i<10;i++)
          cout<<tab[i]<<" ";
}