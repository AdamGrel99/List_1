#include <iostream>
#include <algorithm>

using namespace std;

void strFindAndCount( string &text, string Fraza ); // t¹ funkcje wzialem z neta

int main()
{
    string text = "Ala ma kota";
    strFindAndCount( text, "ma" );
    return 0;
}

void strFindAndCount( string &text, string Fraza )
{
    size_t znalezionaPozycja = text.find( Fraza );
    int ilosc_wystapien = 0;
    if( znalezionaPozycja == string::npos )
    {
        cout << "Nie znaleziono frazy w tekscie" << endl;
        return;
    }
    do
    {
        ilosc_wystapien++;
        znalezionaPozycja = text.find( Fraza, znalezionaPozycja + Fraza.size() );
    } while( znalezionaPozycja != string::npos );
    cout << " ta fraza wyst¹pi³a : " << ilosc_wystapien << " razy " << endl;
}