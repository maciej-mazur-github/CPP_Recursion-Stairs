#pragma once
class RecursionStairs
{
	static int partialSum;
	static int counter;
public:
	void drawRecursionStairs();
private:
	int adder(int liczba);
	void stairStep(int amount, char character);
};

