#include <iostream>

using namespace std;

void fun_fibonacii_iter (int n);
//int fun_fibonacii_reku (int n);
int fib(int n);

int main()
{
    int n;
    cout << " Podaj ile chcesz wyrazów ci¹gu Fibonacciego ?" << endl << " ";
    cin >> n;
    fun_fibonacii_iter(n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    //fun_fibonacii_reku(n);
    return 0;
}

void fun_fibonacii_iter (int n)
{
    int tab [n];
    tab [0] = 0;
    tab [1] = 1;
    for (int i = 2; i < n; i++)
    {
        tab [i] = tab [i - 2] + tab [i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
}

int fib(int n)
{
	if(n == 0)
        return 0;
	if(n < 3)
		return 1;
    return fib(n - 2) + fib(n - 1);
}

/* // tak probowalem to walnąć ale raczej lipton
int fun_fibonacii_reku (int n)
{
    int tab [n];
    tab [0] = 0;
    tab [1] = 1;
    if (n < 1)
        return 0;
    return fun_fibonacii_reku(tab [n - 1]) + fun_fibonacii_reku(tab [n - 2]);
}
*/