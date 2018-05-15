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
			string category[40][2] = {{"What is master chief's rank?\nA)Captain\nB)Master Cheif\nC)General\nD)Staff Sergeant","b"},{"What is master chief's spartan number?\nA)117\nB)226\nC)1\nD)668","a"},{"What planet did vader find starkiller on?\nA)Naboo\nB)Felucia\nC)Kashyyyk\nD)Endor","c"},{"What was Shak-ti’s apprentice’s name?\nA)Starkiller\nB)Yondu\nC)Plo Koon\nD)Malice","d"},{"Who was the senator of Alderaan who helped found the rebellion?\nA)Bail Organa\nB)Mon Mothma\nC)Admiral Ackbar\nD)Anakin","a"},{"What is the name of the location in the top left corner of the fortnite map?\nA)Salty Springs\nB)Junk Junction\nC)Risky Reels\nD)Haunted Hills","b"},{"What is the call sign of the player character in Halo: Reach?\nA)Shadow 7\nB)Master Chief\nC)Little Jimmy\nD)Nobel 6","d"},{"What prophet does Master Chief kill in Halo:2?\nA)Truth\nB)Regret\nC)Mercy\nD)Charity","c"},{"What is the name of the curator of the halo ring from the first halo game?\nA)Pikmin33\nB)667 Ackerson\nC)343 Guilty Spark\nD)Cortana","c"},{"What was the infamous “gandi” glitch in Sid Meir’s Civilization? \nA)Gandi kills himself\nB)You can only choose the peaceful options\nC)He gave all of his stuff away\nD)It caused him to immediately attack everyone","d"},{"What was minecraft originally called?\nA)Cave Game\nB)Expedition: Survival\nC)Building Game\nD)3DTerraria","a"},{"When was minecraft first released?\nA)1992\nB)2001\nC)2010\nD)2009","d"},{"What is the current minecraft version(as of 5/15/18)?\nA)Beta 4.9.2\nB)1.11.2\nC)1.12.2\nD)1.13","c"},{"In Skyrim, What is the protagonist called?\nA)Bill\nB)Dovahkiin\nC)Drakwind\nD)Mirak","b"},{"In COD Black Ops I, which character makes an appearance from a previous game?\nA)Snake\nB)Mason\nC)Reznov\nD)Woods","c"},{"What was the first video game to ever come out?\nA)Pong\nB)Ping\nC)Pac-Man\nD)Tetris","a"},{"Which company brought RPGs back to style?\nA)Mojang\nB)Treyarch\nC)Nintendo\nD)Blizzard","d"},{"What style of game is Halo?\nA)RPG\nB)Platform\nC)8-Bit\nD)FPS","d"},{"What is the top upcoming video game style?\nA)FPS\nB)Battle Royale\nC)Platform\nD)8-Bit","b"},{"What new character is there in Fortnite?\nA)Doctor Strange\nB)Iron Man\nC)John Wick\nD)Thanos","d"},{"Who is the red ghost in Pac-Man?\nA)Inky\nB)Blinky\nC)Pinky\nD)Clyde","b"},{"What mission in Modern Warfare was controversial?\nA)Higher Hights\nB)No Man Left Behind\nC)No Russian\nD)Not Forgotten","c"},{"Who is the most famous video game character? \nA)Mario\nB)Sonic\nC)Steve\nD)Luigi","a"},{"Who is the hero in The Legend of Zelda?\nA)Zelda\nB)Link\nC)Gannondork\nD)Navi","b"},{"What game series uses golden rings for money / life?\nA)Super Mario\nB)Sonic the Porcupine\nC)Halo:Reach\nD)Sonic the Hedgehog","d"},{"What does NES stand for?\nA)Nintendo Entertainment System\nB)Never Ending Simulation\nC)Noobs Eating Snacks\nD)Never Ending Story","a"},{"How many buttons were on the original NES controller?\nA)5\nB)11\nC)8\nD)10","c"},{"When was Nitendo founded\nA) October 1899\nB) June 1964\nC) July 1889\nD) September 1889","D"},{"What game was Sanada Komatsu in?\nA) Samurai Battles\nB) Samurai Warriors\nC) Samurai War\nD) Samurai Jack","B"},{"Which game featured an overnight security shift at a pizza parlor\nA) Five Nights At Freddys\nB) Pizza Security\nC) Parlor Breakout\nD) Cawthon Security","A"},{"Who created FNAF\nA) Paul Blart\nB) Scott Cawthon\nC) Scott Pruitt\nD) Micheal Scott","B"},{"What group did Luvig Maxis form\nA) Group 666 \nB) Group 690\nC) Group 935\nD) Group 427","C"},{"What was the “Blood Code” for Mortal Combat on the Sega Genesis\nA) A B B C A B B\nB) A B B C A B A\nC) A B A C A A B\nD) A B A C A B B","D"},{"What is the Konami Code\nA) ^vv^ <> << BA Start\nB) ^vv^ <> <> AB Start\nC) ^^v^ <> << BA Start\nD) ^^vv <> <> BA Start","D"},{"Whos is the protaganist in Assassin creed II \nA) Aya\nB) Shay\nC) Ezio\nD) Bayek","C"},{"In Fallout, what group do the friendly power armor people belong to?\nA)Brotherhood Of Steel\nB) Chairmen\nC) Ceasers legion\nD) Crimson Caravan","A"},{"What will you get for killing a Minotaur in God of War III?\nA) Money\nB) Skill points\nC) Health points\nD) Health Orbs","D"},{"What new item does ezio acquire in Assassin's Creed Revelations?\nA) death blade\nB) the last blade\nC) Hope Blade\nD) Blade of Hope","C"},{"Which company developed Tomb Raider?\nA) Sega\nB) EA\nC) Core Design\nD) Ubisoft",""},{"Who is the final prophet to die\nA) Hope\nB) Truth\nC) Chastity\nD) Virtue","B"}};
	
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
			//Declare questions & answers
	string category[40][2] = {{"Which actor played the tenth Doctor\nA) David Tennat\nB) Matt Smith\nC) Peter Capaldi\nD) Tom Baker","A"},{"What is a magical place?\nA) New York)\nB) Tahiti\nC) Space\nD) Lithone","B"},{"The Inhumans gain their power from ______ crystals\nA) Light\nB) Dark\nC) Terrigen\nD) Salcar","C"},{"What day is "Impossible Astronaut day"\nA) May 23th\nB) April 20th\nC) March 23th\nD) April 23th","D"},{"How many regenerations does a Time Lord have\nA) 13\nB)11\nC)12\nD)25","C"},{"Who is the creator of the Daleks?\nA) Davros\nB) The Master\nC) The Silence\nD) Sakaro","A"},{"How many times has Rick had to switch universes\nA) 3\nB) 4\nC) 5\nD) 2","answer"},{"How did Rick destroy the Galatic Federation?\nA) He blew up their homeworld\nB) He droped their president in the blender dimension\nC) He reduced their curency to 0\nD) He shot them all","C"},{"What town and state does Stranger Things take place in?\nA) New York, New York\nB) Scranton, Pensylvania\nC) Columcus, Ohio\nD) Hawkins, Indiana","D"},{"What did Dustin nickname his Demodog\nA) Devorian\nB) Dart\nC) Dumpling\nD) Dinkle","B"},{"What is the name of Garys refridgetator\nA) Bob\nB) Bertha\nC) Bop\nD) Beth","D"},{"What is the Autobot eqivelant of Trypticon?\nA) Metroplex\nB) Iacon\nC) Alpha Omega\nD) Alpha Trion","A"},{"Who leads the three original insecticons\nA) Bombshell\nB) Shrapnel\nC) Kickback\nD) Sharpshot","B"},{"What do all of the aerialbots combine into?\nA) Bruticus\nB) Superion\nC) Devastator\nD) Predaking","B"},{"What decepticon did megatron leave behind on Cybertron when he went to earth\nA) Soundwave\nB) Shockwave\nC) Starscream\nD) Thundercracker","B"},{"Who is the oldest living transformer\nA) Megatron\nB) Optimus Prime\nC) Kup\nD) Alpha Trion","D"},{"How long was roy engaged to pam before he decided to get married
\nA) 3 years\nB) 3 months\nC) 2 years\nD) 3 days","A"},{"What was jan’s last name before she divorced her husband\nA) Scott\nB) Gould\nC) Vance\nD) Palmer","B"},{"What is the name of the pub prominently featured in “the office”\nA) The Poor Pub\nB) Poor Samuels\nC) Poor Richards\nD) Rich Mikes","C"},{"What nickname does Andy give Jim\nA) Little Tuna\nB) Large Tuna\nC) Big Carp\nD) Big Tuna","D"},{"What role is kvn supposed to preform? (besides being super annoying and worthless)\nA) Deep Space Insanity Avoidance Companion\nB) Deep Space Inmate Protector droid \nC) Deep Space Engine Repair and Protcol droid\nD) Deep space magic haver droid","A"},{"What are the two main characters in Supernatural\nA) Dean and jerry\nB) Jerry and Sam\nC) Dean and Sam\nD) Sam and George","C"},{"Who is the Flash\nA) Clark Kent\nB) Tim Burton\nC) Barry Allen\nD) Bruce Banner","C"},{"How many Cybertronian wars have there been\nA) 3\nB) 2\nC) 5\nD) 1","A"},{"How many casettibots does Blaster have\nA) 4\nB) 3\nC) 5\nD) 6","D"},{"What is the name of the pterodactyl Autobot\nA) Swoop\nB) Grimlock\nC) Slag\nD) Sludge","A"},{"What is the name of the Transformer the Autobots found in the ice\nA) Skywarp\nB) Sidewinder\nC) Jetfire\nD) Jetstream","C"},{"Which alien race experimented on humans to create a new solider race\nA) the Skrulls\nB) The Kree\nC) The Shiar\nD) The Inhumans","B"},{"Who was John Goodspeeds co-piolet\nA) Avacado\nB) Little Cado\nC) The lord commander\nD) KVN","C"},{"Who created the original idea for final space?\nA) Tim Burton\nB) Olan Rogers\nC) George Rogers\nD) Mr Rogers","B"},{"What was the name of the only "good" Titan\nA) Bogo\nB) Atremis\nC) Tahkisis\nD) Bolo","D"},{"Question\nA)_\nB)_\nC)_\nD)_","answer"},{"What is the name of Garyys prison ship A.I.\nA) S.A.M\nB) H.U.E.\nC) K.V.N.\nD) P.A.U.L.","B"},{"Which Autobot attempts to kill Megatron with a rocket launcher shortly after their arrival on earth?\nA) Cliffjumper\nB) Hound\nC) Optimus Prime\nD) Jazz","A"},{"Which group of Autobots go back in time to Cybertron\nA) The Medibots\nB) Kup, Optimus Prime, Ironhide, and Jazz\nC) Wheeljack and Bumblebee\nD) The Aeiralbots","D"},{"Which group of Decepticons does Starscream create\nA) The constructicons\nB) The predicons\nC) The cassetticons\nD) The Combaticons","D"},{"What was the Name of Dwights girlfirend\nA) Jan\nB) Angela\nC) Pam\nD) Kelly","B"},{"QWhat was the name of Jims girlfriend right after he returend from Stamford\nA) Karen\nB) Angela\nC) Kelly\nD) Pam","A"},{"What day does Stanly love more than any other day\nA) Hot Dog Day\nB) Pizza Day\nC) Crossword puzzle day\nD) Pretzel day","D"},{"What is the name of Kevins FIRST band\nA) Scrantonicity\nB) Scrantonicity 2\nC) Andy and the Scantrons\nD) kevin was never part of a band","A"},};
	
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
