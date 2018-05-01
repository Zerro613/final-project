/*
Final Project
Authors: Ethan Bates, Owen Palmer, John Fitzgerald
Date: 5/1/18
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int players = 0;
	string category = "";
	string playerOne = "";
	string playerTwo = "";
	string playerThree = "";
	string playerFour = "";
 	cout << "Welcome to our trivia game!" << endl;
	cout << "Please enter a number of players (1 thorugh 4): ";
	cin >> players;
	
	if (players == 1){
	cout << "Please enter your name: ";
	cin >> playerOne; 
	cout << "Hello " << playerOne << endl; 
		}
	if (players == 2){
		cout << "Please enter player one's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter player two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl; 
		}
	if (players == 3){
		cout << "Please enter player one's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter player two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter player three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl; 
		}
	if (players == 4){
		cout << "Please enter player one's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter player two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter player three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl;
		cout << "Please enter player four's name: ";
		cin >> playerFour; 
		cout << "Hello " << playerFour << endl; 
		}	
		else if (players != 1 || 2 || 3 || 4) {
			cout << "Please enter a correct number (restart the program and try again)."; 
		}	
		cout << "please enter a category:
			Movies
			Video Games
			or T.V. Shows";
			cin >> category; 
}
