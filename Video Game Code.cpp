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
	string category[40][2] = {{"What is master chief's rank?\nA)Captain\nB)Master Cheif\nC)General\nD)Staff Sergeant","b"},{"What is master chief's spartan number?\nA)117\nB)226\nC)1\nD)668","a"},{"What planet did vader find starkiller on?\nA)Naboo\nB)Felucia\nC)Kashyyyk\nD)Endor","c"},{"What was Shak-ti’s apprentice’s name?\nA)Starkiller\nB)Yondu\nC)Plo Koon\nD)Malice","d"},{"Who was the senator of Alderaan who helped found the rebellion?\nA)Bail Organa\nB)Mon Mothma\nC)Admiral Ackbar\nD)Anakin","a"},{"What is the name of the location in the top left corner of the fortnite map?\nA)Salty Springs\nB)Junk Junction\nC)Risky Reels\nD)Haunted Hills","b"},{"What is the call sign of the player character in Halo: Reach?\nA)Shadow 7\nB)Master Chief\nC)Little Jimmy\nD)Nobel 6","d"},{"What prophet does Master Chief kill in Halo:2?\nA)Truth\nB)Regret\nC)Mercy\nD)Charity","c"},{"What is the name of the curator of the halo ring from the first halo game?\nA)Pikmin33\nB)667 Ackerson\nC)343 Guilty Spark\nD)Cortana","c"},{"What was the infamous “gandi” glitch in Sid Meir’s Civilization? \nA)Gandi kills himself\nB)You can only choose the peaceful options\nC)He gave all of his stuff away\nD)It caused him to immediately attack everyone","d"},{"What was minecraft originally called?\nA)Cave Game\nB)Expedition: Survival\nC)Building Game\nD)3DTerraria","a"},{"When was minecraft first released?\nA)1992\nB)2001\nC)2010\nD)2009","d"},{"What is the current minecraft version(as of 5/15/18)?\nA)Beta 4.9.2\nB)1.11.2\nC)1.12.2\nD)1.13","c"},{"In Skyrim, What is the protagonist called?\nA)Bill\nB)Dovahkiin\nC)Drakwind\nD)Mirak","b"},{"In COD Black Ops I, which character makes an appearance from a previous game?\nA)Snake\nB)Mason\nC)Reznov\nD)Woods","c"},{"What was the first video game to ever come out?\nA)Pong\nB)Ping\nC)Pac-Man\nD)Tetris","a"},{"Which company brought RPGs back to style?\nA)Mojang\nB)Treyarch\nC)Nintendo\nD)Blizzard","d"},{"What style of game is Halo?\nA)RPG\nB)Platform\nC)8-Bit\nD)FPS","d"},{"What is the top upcoming video game style?\nA)FPS\nB)Battle Royale\nC)Platform\nD)8-Bit","b"},{"What new character is there in Fortnite?\nA)Doctor Strange\nB)Iron Man\nC)John Wick\nD)Thanos","d"},{"Who is the red ghost in Pac-Man?\nA)Inky\nB)Blinky\nC)Pinky\nD)Clyde","b"},{"What mission in Modern Warfare was controversial?\nA)Higher Hights\nB)No Man Left Behind\nC)No Russian\nD)Not Forgotten","c"},{"Who is the most famous video game character? \nA)Mario\nB)Sonic\nC)Steve\nD)Luigi","a"},{"Who is the hero in The Legend of Zelda?\nA)Zelda\nB)Link\nC)Gannondork\nD)Navi","b"},{"What game series uses golden rings for money / life?\nA)Super Mario\nB)Sonic the Porcupine\nC)Halo:Reach\nD)Sonic the Hedgehog","d"},{"What does NES stand for?\nA)Nintendo Entertainment System\nB)Never Ending Simulation\nC)Noobs Eating Snacks\nD)Never Ending Story","a"},{"How many buttons were on the original NES controller?\nA)5\nB)11\nC)8\nD)10","c"},{"When was Nitendo founded\nA) October 1899\nB) June 1964\nC) July 1889\nD) September 1889","D"},{"What game was Sanada Komatsu in?\nA) Samurai Battles\nB) Samurai Warriors\nC) Samurai War\nD) Samurai Jack","B"},{"Which game featured an overnight security shift at a pizza parlor\nA) Five Nights At Freddys\nB) Pizza Security\nC) Parlor Breakout\nD) Cawthon Security","A"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"}};
		
		
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
