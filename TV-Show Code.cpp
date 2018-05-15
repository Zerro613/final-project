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
	string category[40][2] = {{"Which actor played the tenth Doctor\nA) David Tennat\nB) Matt Smith\nC) Peter Capaldi\nD) Tom Baker","A"},{"What is a magical place?\nA) New York)\nB) Tahiti\nC) Space\nD) Lithone","B"},{"The Inhumans gain their power from ______ crystals\nA) Light\nB) Dark\nC) Terrigen\nD) Salcar","C"},{"What day is "Impossible Astronaut day"\nA) May 23th\nB) April 20th\nC) March 23th\nD) April 23th","D"},{"How many regenerations does a Time Lord have\nA) 13\nB)11\nC)12\nD)25","C"},{"Who is the creator of the Daleks?\nA) Davros\nB) The Master\nC) The Silence\nD) Sakaro","A"},{"How many times has Rick had to switch universes\nA) 3\nB) 4\nC) 5\nD) 2","answer"},{"How did Rick destroy the Galatic Federation?\nA) He blew up their homeworld\nB) He droped their president in the blender dimension\nC) He reduced their curency to 0\nD) He shot them all","C"},{"What town and state does Stranger Things take place in?\nA) New York, New York\nB) Scranton, Pensylvania\nC) Columcus, Ohio\nD) Hawkins, Indiana","D"},{"What did Dustin nickname his Demodog\nA) Devorian\nB) Dart\nC) Dumpling\nD) Dinkle","B"},{"What is the name of Garys refridgetator\nA) Bob\nB) Bertha\nC) Bop\nD) Beth","D"},{"What is the Autobot eqivelant of Trypticon?\nA) Metroplex\nB) Iacon\nC) Alpha Omega\nD) Alpha Trion","A"},{"Who leads the three original insecticons\nA) Bombshell\nB) Shrapnel\nC) Kickback\nD) Sharpshot","B"},{"\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
	
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
}
