
/*
Final Project
Authors: Ethan Bates, Owen Palmer, John Fitzgerald
Date: 5/1/18
*/
#include <string>
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
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl; 
		}
	if (players == 3){
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl; 
		}
	if (players == 4){
		cout << "Please enter player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << endl;
		cout << "Please enter Player Four's name: ";
		cin >> playerFour; 
		cout << "Hello " << playerFour << endl; 
		}	
		else if (players <= 0 || players >= 5) {
			cout << "Please enter a correct number.";
			//return (0); 
		}	
		cout << "please enter a category:\nMovies\nVideo Games\nor TV Shows: ";
			cin >> category; 
		if (category != "movies"){
			if (category != "video games") {
				if (category != "tv shows") {
					cout << "Please enter a correct category..." << endl;
					return (0);
			}
		}
	}	
}
