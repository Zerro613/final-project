/*
Base Code
Author: Owen Palmer
Date: 5/1/18
*/
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	//Declare values
	int i = 0;
	int playerPoint = 0;
	int questionNum = 0;
	string answer = "";
	
	//Declare questions & answers
	string category[40][2] = {{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"What is the universal greeting?\nA) hello\nB) Bah-weep-gra-na-weep-ninny-bong\nC) Ooh-ee-ooh-ah-ah-ting-tang-wadda-wadda-bang-bang\nD) good day to you sir (or madam)","B"},{"The Iron Giant’s original mission was…
\nA) to scan earth for lifeforms\nB) to stop the cold war and unite earth\nC to capture some lifeforms to take back for studying\nD) to destroy the human race",""},{"Question\nA) rouge two\nB) rouge one\nC) rouge five\nD) red leader","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
	
	//40 questions
	while (i != 40) {

		//Ask question
		cout << category[i][0] << "\nAnswer: ";
		cin >> answer;
		
		//Toupper
		transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
		

		//Check if answer is correct
		if (answer == category[i][1]) {
			cout << "\nCorrect!\n\n\n";
			
			//Give the player a point
			playerPoint = playerPoint + 1;
		}
		else {
			cout << "\nIncorrect answer, U Suk!\n\n\n";
		}
		//Next question/answer
		i = i + 1;
	}
	//Display points
	cout << "Your total points: " << playerPoint;
	
	//Thank user
	cout << "\n\n\n\nThank you for using this program! :)";
