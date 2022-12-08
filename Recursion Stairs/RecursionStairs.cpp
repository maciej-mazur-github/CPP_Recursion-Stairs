#include "RecursionStairs.h"
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


int RecursionStairs::partialSum = 0;
int RecursionStairs::counter = 0;


void RecursionStairs::drawRecursionStairs()
{
	cout << "\nHow many stair steps do you need to be printed?: ";
	int number;
	cin >> number;
	cout << "\n\n";
	adder(number);
}

int RecursionStairs::adder(int number)
{
	cout << counter << " step ";
	stairStep(counter, '>');
	cout << partialSum << " + " << counter << " = " << (partialSum + counter) << endl;
	partialSum += counter;

	if (counter < number)
	{
		counter++;
		partialSum = adder(number);
	}

	else
	{
		cout << "......The end of ascending. Descening now.....\n";
	}

	cout << counter << " step ";
	stairStep(counter, '<');
	cout << partialSum << " + " << counter << " = " << (partialSum) << endl;
	partialSum -= counter;
	counter--;

	return partialSum;
}


void RecursionStairs::stairStep(int amount, char character)
{
	for (int i = 0; i < amount; i++)
	{
		cout << character;
	}
	cout << " ";
}