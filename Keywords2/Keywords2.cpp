// Keywords2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

 
int main()
{
	string username = "user"; 
	string password = "password";
	
	// Display Title of program to user
	cout << "Keywords II: The Reckoning" << endl << endl;

	// Ask the recruit to login using their name
	cout << "Please enter a username: " << endl;

	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> username; 

	// Ask the recruit to enter a password
	cout << "Please enter a password: " << endl;

	// Hold the password in a var, but it won't be used.
	cin >> password;

	// Explain that the password is useless
	cout << "Just kidding.  You don't need a password." << endl;
	password = "password"; 

	// Display an overview of what Keywords II is to the recruit 

	// Display an directions to the recruit on how to use Keywords



	// Create a collection of 10 words you had wrote down manually

	// Create an int var to count the number of simulations being run starting at 1

	// Display the simulation # is staring to the recruit. 

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 



	// While recruit hasn�t made too many incorrect guesses and hasn�t guessed the secret word

	//     Tell recruit how many incorrect guesses he or she has left

	//     Show recruit the letters he or she has guessed

	//     Show player how much of the secret word he or she has guessed

	//     Get recruit's next guess

	//     While recruit has entered a letter that he or she has already guessed

	//          Get recruit �s guess

	//     Add the new guess to the group of used letters

	//     If the guess is in the secret word

	//          Tell the recruit the guess is correct

	//          Update the word guessed so far with the new letter

	//     Otherwise

	//          Tell the recruit the guess is incorrect

	//          Increment the number of incorrect guesses the recruit has made

	// If the recruit has made too many incorrect guesses

	//     Tell the recruit that he or she has failed the Keywords II course.

	// Otherwise

	//     Congratulate the recruit on guessing the secret words

	// Ask the recruit if they would like to run the simulation again

	// If the recruit wants to run the simulation again

	//     Increment the number of simulations ran counter

	//     Move program execution back up to // Display the simulation # is staring to the recruit. 

	// Otherwise 

	//     Display End of Simulations to the recruit

	//     Pause the Simulation with press any key to continue
	
	return 0;
}

