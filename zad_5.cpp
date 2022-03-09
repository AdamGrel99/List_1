#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector <int> tab;
    int n;
    //srand( time( NULL ) );
    cout << "Leæ z liczbami synek ?" << endl;
    cin >> n;
	while(n >= 1)
	{
		tab.push_back(n); //dodanie elementu do wektora
		cin >> n;
	}

	int result;
    result = tab [0];
    for (unsigned int i = 1; i < tab.size(); i++)
    {
        if (result < tab [i])
        {
            result = tab [i];
        }
    }
    // cout << result << endl;

    tab.clear();
	for (int i = 0; i < result; i++)
    {
        tab.push_back((rand() % 399 ) - 199);
    }
    /*
    for (int i = 0; i < result; i++)
    {
        cout << " " << tab [i];
    }
    */
    // średnia arytmetyczna co drugich dodatnich / średnia arytmetyczna co trzeci wszystkich wylosowanych

    int dzielnik = 0;
    float co_trzeci = 0;
    for (unsigned int i = 1; i < tab.size(); i += 3)
    {
        co_trzeci = co_trzeci + tab [i];
        dzielnik++;
    }
    // cout << endl << co_trzeci / dzielnik;

    vector <int> pap;
    for (unsigned int i = 0; i < tab.size(); i++)
    {
        int index = 0;
        if (tab [i] > 0)
        {
            pap.push_back(tab [i]);
            index++;
        }
    }
    int dzielnik2 = 0;
    float co_drugi = 0;
    for (unsigned int i = 1; i < pap.size(); i += 2)
    {
        co_drugi = co_drugi + pap [i];
        dzielnik2++;
    }
    // cout << endl << co_drugi / dzielnik2;

    cout << endl << "Wynik ma tutaj wyjść taki = " << (co_drugi / dzielnik2) / (co_trzeci / dzielnik);
    return 0;
}