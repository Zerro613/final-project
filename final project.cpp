/*
Final Project
Authors: Ethan Bates, Owen Palmer, John Fitzgerald
Date: 5/1/18
*/
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	//Declare values
	int players = 0;
	string category = "";
	string playerOne = "";
	string playerTwo = "";
	string playerThree = "";
	string playerFour = "";
	int playerNum[4] = {0,0,0,0};
	string rpo = "";
	
	//Secondary values
	int i = 0;
	int r = 0;
	int playerPoint = 0;
	int questionNum = 0;
	string answer = "";
	
	//Enter player count
 	cout << "Welcome to our trivia game!" << endl;
	cout << "Please enter a number of players (1 thorugh 4): ";
	cin >> players;
	cout << endl;
	
	//Enter player name
	if (players == 1){
		
	//Random movie reference
	cout << "Ready Player One?: ";
	cin >> rpo;
	
	//Lowercase rpo
	transform(rpo.begin(), rpo.end(), rpo.begin(), ::tolower);
	
	if (rpo == "no") {
		cout << "I hate you";
		return 0;
	}
	
	cout << "Please enter your name: ";
	cin >> playerOne; 
	cout << "Hello " << playerOne << "!" << endl << endl; 
		}
	//Enter player name
	if (players == 2){
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << "!" << endl << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << "!" << endl << endl; 
		}
	//Enter player name
	if (players == 3){
		cout << "Please enter Player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << "!" << endl << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << "!" << endl << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << "!" << endl << endl; 
		}
	//Enter player name
	if (players == 4){
		cout << "Please enter player One's name: ";
		cin >> playerOne; 
		cout << "Hello " << playerOne << "!" << endl << endl;
		cout << "Please enter Player Two's name: ";
		cin >> playerTwo; 
		cout << "Hello " << playerTwo << "!" << endl << endl;
		cout << "Please enter Player Three's name: ";
		cin >> playerThree; 
		cout << "Hello " << playerThree << "!" << endl << endl;
		cout << "Please enter Player Four's name: ";
		cin >> playerFour; 
		cout << "Hello " << playerFour << "!" << endl << endl; 
		}	
		//Check for incorrect player number
		else if (players <= 0 || players >= 5) {
			cout << "Please enter a correct number...";
			return 0; 
		}	
		cout << "please enter a category:\nMovies\nGames\nShows\n\nCategory: ";
		cin >> category; 
		
		//Lowercase category
		transform(category.begin(), category.end(), category.begin(), ::tolower);

		//If movies
		if (category == "movies") {
			
			//Declare questions & answersf
			string category[40][2] = {{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"What is the universal greeting?\nA) hello\nB) Bah-weep-gra-na-weep-ninny-bong\nC) Ooh-ee-ooh-ah-ah-ting-tang-wadda-wadda-bang-bang\nD) good day to you sir (or madam)","B"},{"The Iron Giant’s original mission was…
\nA) to scan earth for lifeforms\nB) to stop the cold war and unite earth\nC to capture some lifeforms to take back for studying\nD) to destroy the human race",""},{"Question\nA) rouge two\nB) rouge one\nC) rouge five\nD) red leader","A"},{"Iron man’s best friend is nicknamed…\nA) Rodney\nB) Rob\nC) Rhodey\nD) James","C"},{"Thanos was born on the planet of…\nA) Saturn\nB) Titan\nC) Pluto\nD) Lithone","Titan"},{"During the parade in “ferris bueller's day off” the song (blank) is prominently featured
\nA) Twist and Shout \nB) Bliztkrieg Bop\nC) \nD) We're not gonna take it","Twist and Shout"},{"Spider-man references what movie in “Infinity Wars”\nA) The Empire Strikes Back\nB) Aliens\nC) Monty Python and the Holy Grail\nD) Indiana Jones","Aliens"},{"What is the name of the last survivor of “lithone”\nA) Kranix\nB) Arbulus\nC) Jetfire\nD) Thanos"," Kranix"},{"What are the odds of successfully navigating an asteroid system?
\nA) 726 to 1\nB) 3774 to 1\nC) 725 to 1\nD) ","C"},{"What is the name of the storm tropper who guards the millenium falcon in "A New Hope"?\nA) tk-427\nB) his name isnt given in the movie\nC) tk-528\nD) tk-421","D"},{"what is the form of "The Destoyer" in Ghostbusters?\nA) a camera tripod\nB) the stay puff man\nC) the michellin man\nD) zuul!","B"},{"Gladriel has the ring of ______\nA) air\nB) earth\nC) fire\nD) water"," D"},{"How many rings were given to the Dwarves (in the halls of stone)\nA) 7\nB) 9\nC) 1\nD) 3","A"},{"What country does Indiana Jones find Marion in?\nA) Brazil\nB) Nepal\nC) China\nD) Eygpt","B"},{"Westly has built up an immunity to ______\nA) sulfur\nB) stab wounds\nC) Iodine\nD) Inconcievableness!","C"},{"Who killed Inigo Montoyas father\nA) Rugen\nB) Westly\nC) andre the giant\nD) Prince humperdinkle","A"},{"Nature always ______\nA) prevails\nB) fails\nC) Finds a way\nD) sucks","C"},{" What weapon kills the "Killer Rabbit of Caerbannog"\nA) The holy pistol of Nee\nB) The flameing sword of fire\nC) The holy hand grenade of antioch\nD)_ the exceptionally long shortsword of the exceptionally tall midget,"C"},{"In the second Harry Potter movie Ron takes on the role of what chess piece?\nA) The king\nB) The knight\nC) the bishop\nD) The queen","B"},{"how many rings were given to the elven kings (under the stars)\nA) 7\nB) 9\nC) 4\nD) 3","D"},{"Who destorys Isengard?\nA) Treebeard\nB) Gandalf\nC) the knights of Rohan\nD) Gondor","A"},{"how old is yoda when he dies?\nA) 10,000\nB) 1,000\nC) 900\nD) 500","C"},{" what is the name of the gungan the capture Jar Jar\nA) a freaking hero\nB) Tarpul\nC) Tarkin\nD) Tarful","B"},{"What alien race leads the Sepertist attack on Naboo?\nA) Nemodians\nB) the sith\nC) the gungans\nD) the mandalorians","A"},{"who was the original template for the clone troopers\nA) Jango fett\nB) Boba Fett\nC) obi-wan\nD) sifo dias","A"},{"What is the name of the rhino-like creature that anakin rides in the Geonosisan arena\nA) Nexu\nB) Ackley\nC) Rancor\nD) Reek","D"},{"What is the name of the Geonosian leader\nA) Poggle the greater\nB) Poggle the lesser\nC) poggle the medium\nD) Wat Tambor","B"},{"Where is Ki-adi-mundi fighting when order 66 is enacted\nA) Mustafar\nB) courscant\nC) Mygeeto\nD) Nemodia","C"},{"Where is Plo-Koon fighting when order 66 is enacted?\nA) Mygeeto\nB) Mustafar\nC) Felucia\nD) Nemodia","D"},{"Which clone commander attempts to kill Obi-wan\nA) Captian Rex\nB) Commander Gree\nC) Commander Cody\nD) Commander Wolfe","C"},{"What is the answer to life, the universe, and everything?\nA) heck if I know\nB) 42\nC) 45\nD) 420","B"},{"Which actor plays the goblin king in "Labrinyth"\nA) David archeletta\nB) Liam neeson\nC) Samuel Jackson\nD) David Bowie ","D"},{"Where is the Holy grail in Monty Python and the Holy Grail?\nA) France\nB) England\nC) INside the stomch of the killer rabbit\nD) Germany","A"},{"What planet was Shiv Palpitine born on?\nA Naboo)\nB) Courscant\nC) Tatooine\nD) Jaku","A"},{"What is the name of the Ewok cheiftan\nA) Wicket\nB) Chirpa\nC) Wedge\nD) Logray","B"},{"What actor plays Fezzik the giant in The Princess Bride?\nA) Andy the giant\nB) Alex the Giant\nC) Arthur the Giant\nD) Andre the Giant","D"},{"How much power is required to travel thorough time?\nA)1.12 GigaWatts\nB) 1.21 Watts \nC) 1.21 GigaWatts\nD) 12.21 GigaWatts,"C"},{"Who changes Megatron into Galvatron\nA) Alapha Trion\nB) The deceptioncon council\nC) Starscream\nD) Unicron","D"},};
		
		//40 questions
		while (i != 40) {
			
			//Player's turn
			cout << "\nPlayer " << r + 1 << "'s turn:\n";

			//Ask question
			cout << movies[i][0] << "\nAnswer: ";
			cin >> answer;
			
			//Toupper
			transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
			

			//Check if answer is correct
			if (answer == movies[i][1]) {
				cout << "\n\nCorrect!\n\n";
				
				//Give the player a point
				playerNum[r] = playerNum[r] + 1;
			}
			//Incorrect answer
			else {
				cout << "\n\nIncorrect answer, U Suk!\n\n";
			}
			//Next question/answer
			i = i + 1;
			
			//Next player
			r = r + 1;
			
			//Check for player 5
			if (players == 4) {
				if (r == 4) {
				r = 0;
				}
			}
			if (players == 3) {
				if (r == 3) {
					r = 0;
				}
			}
			if (players == 2) {
				if (r == 2) {
					r = 0;
				}
			}
			if (players == 1) {
				if (r == 1) {
					r = 0;
				}
			}
		}
	}
	//If user chose games
	else if (category == "games") {
		
		//Declare questions & answers
			string vidGames[40][2] = {{"Video games 1\nA)wrong\nB)wrong\nC)wrong\nD)right","d"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
			
			//40 questions
			while (i != 40) {
				
				//Player's turn
				cout << "\nPlayer " << r + 1 << "'s turn:\n";

				//Ask question
				cout << vidGames[i][0] << "\nAnswer: ";
				cin >> answer;
				
				//Toupper
				transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

				//Check if answer is correct
				if (answer == vidGames[i][1]) {
					cout << "\n\nCorrect!\n\n";
					
					//Give the player a point
					playerNum[r] = playerNum[r] + 1;
				}
				//Incorrect answer
				else {
					cout << "\n\nIncorrect answer, U Suk!\n\n";
				}
				//Next question/answer
				i = i + 1;
				
				//Next player
				r = r + 1;
				
				//Check for player 5
				if (players == 4) {
					if (r == 4) {
					r = 0;
					}
				}
				if (players == 3) {
					if (r == 3) {
						r = 0;
					}
				}
				if (players == 2) {
					if (r == 2) {
						r = 0;
					}
				}
				if (players == 1) {
					if (r == 1) {
						r = 0;
					}
				}
				//Next question/answer
				i = i + 1;
			}
	}
	else if (category == "shows") {
		//Declare questions & answers
			string tvShows[40][2] = {{"Tv shows 1\nA)right\nB)wrong\nC)wrong\nD)wrong","a"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},};
			
			//40 questions
			while (i != 40) {
				
				//Player's turn
				cout << "\nPlayer " << r + 1 << "'s turn:\n";

				//Ask question
				cout << tvShows[i][0] << "\nAnswer: ";
				cin >> answer;
				
				//Toupper
				transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
				

				//Check if answer is correct
				if (answer == tvShows[i][1]) {
					cout << "\n\nCorrect!\n\n";
					
					//Give the player a point
					playerNum[r] = playerNum[r] + 1;
				}
				//Incorrect answer
				else {
					cout << "\n\nIncorrect answer, U Suk!\n\n";
				}
				//Next question/answer
				i = i + 1;
				
				//Next question/answer
				i = i + 1;
				
				//Next player
				r = r + 1;
				
				//Check for player 5
				if (players == 4) {
					if (r == 4) {
					r = 0;
					}
				}
				if (players == 3) {
					if (r == 3) {
						r = 0;
					}
				}
				if (players == 2) {
					if (r == 2) {
						r = 0;
					}
				}
				if (players == 1) {
					if (r == 1) {
						r = 0;
					}
				}
			}
	}
	else {
		cout << "\nIncorrect category";
		return 0;
	}
			//Display points
			if (players == 1) {
				cout << "Total Points: " << playerPoint << endl;
				cout << "\nYou Win!";
			}
			else if (players == 2) {
				cout << playerOne << "'s Points: " << playerNum[0] << endl;
				cout << playerTwo << "'s Points: " << playerNum[1] << endl << endl;
				
				//Check for winner
				if (playerNum[0] > playerNum[1]) {
					cout << playerOne << " Won!";
				}
				else if (playerNum[0] < playerNum[1]) {
					cout << playerTwo << " Won!";
				}
				else if (playerNum[0] == playerNum[1]) {
					cout << "It's a Tie!";
				}
			}
			else if (players == 3) {
				cout << playerOne << "'s Points: " << playerNum[0] << endl;
				cout << playerTwo << "'s Points: " << playerNum[1] << endl;
				cout << playerThree << "'s Points: " << playerNum[2] << endl << endl;
				
				//Check for winner
				if (playerNum[0] > playerNum[1] && playerNum[0] > playerNum[2]) {
					cout << playerOne << " Won!";
				}
				else if (playerNum[1] > playerNum[2] && playerNum[1] > playerNum[0]) {
					cout << playerTwo << " Won!";
				}
				else if (playerNum[2] > playerNum[1] && playerNum[2] > playerNum[0]) {
					cout << playerTwo << " Won!";
				}
			}
			else if (players == 4) {
				cout << playerOne << "'s Points: " << playerNum[0] << endl;
				cout << playerTwo << "'s Points: " << playerNum[1] << endl;
				cout << playerThree << "'s Points: " << playerNum[2] << endl;
				cout << playerFour << "'s Points: " << playerNum[3] << endl << endl;
				
				//Check for winner
				if (playerNum[0] > playerNum[1] && playerNum[0] > playerNum[2] && playerNum[0] > playerNum[3]) {
					cout << playerOne << " Won!";
				}
				else if (playerNum[1] > playerNum[2] && playerNum[1] > playerNum[0] && playerNum[1] > playerNum[3]) {
					cout << playerTwo << " Won!";
				}
				else if (playerNum[2] > playerNum[1] && playerNum[2] > playerNum[0] && playerNum[2] > playerNum[3]) {
					cout << playerThree << " Won!";
				}
				else if (playerNum[3] > playerNum[1] && playerNum[3] > playerNum[0] && playerNum[3] > playerNum[2]) {
					cout << playerFour << " Won!";
			}
		}		
	//Thank user
	cout << "\n\nThank you for using this program! :)";
}
