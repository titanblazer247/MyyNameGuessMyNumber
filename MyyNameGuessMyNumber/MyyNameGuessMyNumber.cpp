// MyyNameGuessMyNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int secretnumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0;
		int guess;
		
		{

		
		cout << "\welcome to guess my number\n\n";
		cout << "Enter a guess:";
		cin >> guess;
		++tries;
		
		if (guess > secretnumber)
		{
			cout << "too high!\n\n";
		}
		else if (guess < secretnumber)
		{
			cout << "too low!\n\n";
		}
		else
		{
			cout << "\nthat's it! you got it in" << tries << "guesses!\n";
		}
    return 0;
}

