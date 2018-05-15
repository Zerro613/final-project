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
	string category[40][2] = {{"Which actor played the tenth Doctor\nA) David Tennat\nB) Matt Smith\nC) Peter Capaldi\nD) Tom Baker","A"},{"What is a magical place?\nA) New York)\nB) Tahiti\nC) Space\nD) Lithone","B"},{"The Inhumans gain their power from ______ crystals\nA) Light\nB) Dark\nC) Terrigen\nD) Salcar","C"},{"What day is "Impossible Astronaut day"\nA) May 23th\nB) April 20th\nC) March 23th\nD) April 23th","D"},{"How many regenerations does a Time Lord have\nA) 13\nB)11\nC)12\nD)25","C"},{"Who is the creator of the Daleks?\nA) Davros\nB) The Master\nC) The Silence\nD) Sakaro","A"},{"How many times has Rick had to switch universes\nA) 3\nB) 4\nC) 5\nD) 2","answer"},{"How did Rick destroy the Galatic Federation?\nA) He blew up their homeworld\nB) He droped their president in the blender dimension\nC) He reduced their curency to 0\nD) He shot them all","C"},{"What town and state does Stranger Things take place in?\nA) New York, New York\nB) Scranton, Pensylvania\nC) Columcus, Ohio\nD) Hawkins, Indiana","D"},{"What did Dustin nickname his Demodog\nA) Devorian\nB) Dart\nC) Dumpling\nD) Dinkle","B"},{"What is the name of Garys refridgetator\nA) Bob\nB) Bertha\nC) Bop\nD) Beth","D"},{"What is the Autobot eqivelant of Trypticon?\nA) Metroplex\nB) Iacon\nC) Alpha Omega\nD) Alpha Trion","A"},{"Who leads the three original insecticons\nA) Bombshell\nB) Shrapnel\nC) Kickback\nD) Sharpshot","B"},{"What do all of the aerialbots combine into?\nA) Bruticus\nB) Superion\nC) Devastator\nD) Predaking","B"},{"What decepticon did megatron leave behind on Cybertron when he went to earth\nA) Soundwave\nB) Shockwave\nC) Starscream\nD) Thundercracker","B"},{"Who is the oldest living transformer\nA) Megatron\nB) Optimus Prime\nC) Kup\nD) Alpha Trion","D"},{"How long was roy engaged to pam before he decided to get married
\nA) 3 years\nB) 3 months\nC) 2 years\nD) 3 days","A"},{"What was jan’s last name before she divorced her husband\nA) Scott\nB) Gould\nC) Vance\nD) Palmer","B"},{"What is the name of the pub prominently featured in “the office”\nA) The Poor Pub\nB) Poor Samuels\nC) Poor Richards\nD) Rich Mikes","C"},{"What nickname does Andy give Jim\nA) Little Tuna\nB) Large Tuna\nC) Big Carp\nD) Big Tuna","D"},{"What role is kvn supposed to preform? (besides being super annoying and worthless)\nA) Deep Space Insanity Avoidance Companion\nB) Deep Space Inmate Protector droid \nC) Deep Space Engine Repair and Protcol droid\nD) Deep space magic haver droid","A"},{"What are the two main characters in Supernatural\nA) Dean and jerry\nB) Jerry and Sam\nC) Dean and Sam\nD) Sam and George","C"},{"Who is the Flash\nA) Clark Kent\nB) Tim Burton\nC) Barry Allen\nD) Bruce Banner","C"},{"How many Cybertronian wars have there been\nA) 3\nB) 2\nC) 5\nD) 1","A"},{"How many casettibots does Blaster have\nA) 4\nB) 3\nC) 5\nD) 6","D"},{"What is the name of the pterodactyl Autobot\nA) Swoop\nB) Grimlock\nC) Slag\nD) Sludge","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
	
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
