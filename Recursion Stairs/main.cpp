#include <iostream>
#include <string.h>
#include <conio.h>
//#include <cstdio>
using namespace std;


void dwojkowo(int liczba);
//int sumator(int ile_dodac, int suma_czastkowa);
int sumator(int liczba);
void schodki(int ile, char znak);

int main()
{

	dwojkowo(256);

	cout << "\n\n\nJaka liczbe zsumowac zsumowac? ";
	int	liczba;
	cin >> liczba;

	cout << "\n\n";

	cout << "\n\nSuma liczb naturalnych od 0 do " << liczba << " wynosi: " << sumator(liczba);

	cout << "\n\n\nNacisnij dowolny klawisz, aby zakonczyc dzialanie programu..." << endl;
	_getch();

}


void dwojkowo(int liczba)
{
	int reszta = liczba % 2;

	if (liczba > 1)
	{
		dwojkowo(liczba / 2);
	}

	cout << reszta;
}




int sumator(int liczba)
{
	static int suma_czastkowa;
	static int licznik;



	cout << licznik << " pietro ";
	schodki(licznik, '>');
	cout << suma_czastkowa << " + " << licznik << " = " << (suma_czastkowa + licznik) << endl;
	suma_czastkowa += licznik;

	if (licznik < liczba)
	{
		licznik++;
		suma_czastkowa = sumator(liczba);
	}

	else
	{
		cout << "......Koniec wstepowania. Teraz schodzimy.....\n";
	}

	cout << licznik << " pietro ";
	schodki(licznik, '<');
	cout << suma_czastkowa << " + " << licznik << " = " << (suma_czastkowa) << endl;
	suma_czastkowa -= licznik;
	licznik--;

	return suma_czastkowa;
}


void schodki(int ile, char znak)
{
	for (int i = 0; i < ile; i++)
	{
		cout << znak;
	}
	cout << " ";
}

/*

int sumator(int jeszcze_krokow, int suma_dotychczas)
{
	int rezultat = 0;

	static int krok_rekurencji;

	krok_rekurencji++;
	int to_pietro_nr = krok_rekurencji;

	schodki(to_pietro_nr, '>');

	cout << suma_dotychczas << " + " << to_pietro_nr << " = "
		<< (suma_dotychczas + to_pietro_nr)
		<< endl;

	suma_dotychczas += to_pietro_nr;

	if (jeszcze_krokow > 0)
	{
		rezultat = sumator(jeszcze_krokow - 1, suma_dotychczas);

	}

	else
	{
		cout << "... to ostatni krok, wracamy....." << endl;
		rezultat = suma_dotychczas;
	}

	schodki(to_pietro_nr, '<');
	cout << endl;
	krok_rekurencji--;
	return rezultat;
}



int sumator(int ile_dodac, int suma_czastkowa)
{
	static int krok_rekurencji;
	int pietro = krok_rekurencji;
	int rezultat = 0;

	schodki('>', pietro);
	cout << " " << suma_czastkowa << " + " << pietro << " = " << (suma_czastkowa + pietro) << endl;
	suma_czastkowa = suma_czastkowa + ile_dodac--;
	krok_rekurencji++;

	if (ile_dodac > 0)
	{
		rezultat = sumator(ile_dodac, suma_czastkowa);
	}

	else
	{
		rezultat = suma_czastkowa;
	}


	return rezultat;
}



void schodki(int ile, char znak)
{
	cout << ile << " pietro: ";
	for (int i = 0; i < ile; i++)
	{
		cout << znak;
	}
	cout << " ";
}

*/