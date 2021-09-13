#include <iostream>
#include "time.h"

using namespace std;



int main()
{
	srand(time(0));
	int Guess {0};
	int myGuess {0};
	int trial {0};
	int max = 100;
	int min = 0;
	// cout << Guess << endl;
	cout << "Random number is: ";
	cin >> myGuess;

	Guess = 50;
	cout << "Number guessed: " << Guess << endl;
	trial++;


	while (Guess != myGuess)
	{
		if (Guess > myGuess)
		{
			int half = ((Guess+min)/2);
			max = Guess;
			Guess = half;
			cout << "Too high, try again: " << Guess << endl;
			trial++;
		}
		else if (Guess < myGuess)
		{
			int half = (Guess+max)/2;
			min = Guess;
			Guess = half;
			cout << "Too low, try again: " << Guess << endl;
			trial++;
		}
		else
		{
			break;
		}
	}

	cout << "You got it. The number is " << myGuess << " and you tried " << trial << " times" << endl;

	return 0;

}













// int main()
// {
// 	srand(time(0));
// 	int Guess = rand() % 99 + 1;
// 	int myGuess {0};
// 	int trial {0};
// 	// cout << Guess << endl;
// 	cout << "Random number generated" << endl;

// 	cout << "Guess the number: ";
// 	cin >> myGuess;
// 	trial++;

// 	while (myGuess != Guess)
// 	{
// 		if (myGuess > Guess)
// 		{
// 			cout << "Too high, try again: ";
// 			cin >> myGuess;
// 			trial++;
// 		}
// 		else if (myGuess < Guess)
// 		{
// 			cout << "Too low, try again: ";
// 			cin >> myGuess;
// 			trial++;
// 		}
// 		else
// 		{
// 			break;
// 		}
// 	}

// 	cout << "You got it. The number is " << Guess << " and you tried " << trial << " times" << endl;

// 	return 0;

// }
