/*
Base Code
Author: Owen Palmer
Date: 5/1/18
*/
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	//Declare values
	int rand();
	int random = 0;
	int question# = 0;
	string answer = "";
	string category[5][2] = {{"Question1","Answer1"},{"Question2","Answer2"},{"Question3","Answer3"},{"Question4","Answer4"},{"Question5","Answer5"}};
	
	//40 questions
	while (question# != 41) {
		
		//Randomizer
		random = rand() % 41
		random = number;

		//Ask question
		cout << category[random][1];
		cin >> answer;

		//Check if answer is correct
		if (answer == category[random][2] {
			cout << "Correct!";
			playerPoint + 1;
		}
		else {
			cout << "Incorrect answer, U Suk!";
		}
		question# + 1;
	}
}
