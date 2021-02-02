/*
Programmer: Chris Decker
Purpose: to make the user guess a number between 1 and 100,program tells the user if they are too low or too high, the user gets 5 guesses
Date Started:10/01/2017
Program Name: Guessing Game 2
*/
using namespace std; //lets the compiler know that standard names will be used
#include <iostream>// includes the iostream source file in the program
#include <time.h> //includes the time.h cource file in the program, which allows the program to access the current time in the program
/*
Function Name:main
Purpose: to run the program, calls other functions
Parameters: None
Return value: int
*/
int main() //main function
{ //main function opening bracket
	int guess, tries = 0, targetnumber, guesses = 5; //creates variables of the integer type 
	srand(time(0)); // uses the current time to create a string of random numbers
	targetnumber = rand() % 99 + 1; // makes the variable targetnumber equal to a random number between 1 and 100
	cout << "In this program you will guess a number between 1 and 100, you get five guesses to get the right number.\nThe program will tell you if your guess is too high or too low." << endl; // prints a message to the user
	cout << "Please do not input a number below 1 or abouve 100. Please enter your guess now." << endl; // prints a message for the user
	cin >> guess; // askes for the user input for the variable named quess
	//cout << targetnumber; line used to test program for accuracy
		for (tries = 1; tries <= guesses; tries++) //creates a for loop that continues till tries is equal greater that guesses with tries increasing by one every time the loop completes
		{ //opening bracket for for statement
			if (guess > 100 || guess < 0) //if statement for it guess is greater than 100 or less than 0
			{ //opening bracket for if statement
				tries = tries - 1; //tries variable is equal to tries minus one
				cout << "You didn't guess a number in the correct range dude, try again." << endl; //prints message to user telling them that they didnt follow directions
				cin >> guess; //asks the user for input for the guess variable
			} //closing brackets for if statement
			else if (guess < targetnumber) // if the first if statement is not true then look to see if guess is lower than targetnumer variable
			{ //opening bracket for if statement
				cout << "This is guess " << tries << endl; // prints line telling user what guess this is
				cout << "You guessed too low, guess again" << endl; //prints line telling user they guessed too low
				cin >> guess; // asks user to input for the guess variable
			} //closing bracket for if statement
			else if (guess > targetnumber) // if the other if statements are not true then if guess is higher than targetnumber
			{ //opening bracket for if statement
				cout << "This is guess " << tries << endl; //tells user what guess they are on
				cout << "You guessed too high, guess again" << endl; // rints line letting user know they guessed too high
				cin >> guess; // asks the user for input for the guess variable
			} //closing bracket for if statement
			else if ( guess == targetnumber) // if the other if statements are not true look to see if guess is equal to targetnumber
			{ //opening bracket for if statement
				cout << "This is guess " << tries << endl; // prints line telling user what guess this is
				cout << "You guessed the correct number, Congratulations!!!!" << endl; // gives the user a line telling them that they guessed the correct number
				system("pause"); //pauses the program, waiting for user input to continue
				exit(0); // exits the program
			} //closing bracket for if statement
		} //closing bracket for for loop
		cout << "The correct number is "<< targetnumber << endl; //prints out the target number for it the user never guesses the correct number
		//cout << targetnumber << " this is the answer";
	system("pause"); //pauses the program waiting for user input
} // closing bracket for the program