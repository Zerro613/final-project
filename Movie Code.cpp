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
\nA) to scan earth for lifeforms\nB) to stop the cold war and unite earth\nC to capture some lifeforms to take back for studying\nD) to destroy the human race",""},{"Question\nA) rouge two\nB) rouge one\nC) rouge five\nD) red leader","A"},{"Iron man’s best friend is nicknamed…\nA) Rodney\nB) Rob\nC) Rhodey\nD) James","C"},{"Thanos was born on the planet of…\nA) Saturn\nB) Titan\nC) Pluto\nD) Lithone","Titan"},{"During the parade in “ferris bueller's day off” the song (blank) is prominently featured
\nA) Twist and Shout \nB) Bliztkrieg Bop\nC) \nD) We're not gonna take it","Twist and Shout"},{"Spider-man references what movie in “Infinity Wars”\nA) The Empire Strikes Back\nB) Aliens\nC) Monty Python and the Holy Grail\nD) Indiana Jones","Aliens"},{"What is the name of the last survivor of “lithone”\nA) Kranix\nB) Arbulus\nC) Jetfire\nD) Thanos"," Kranix"},{"What are the odds of successfully navigating an asteroid system?
\nA) 726 to 1\nB) 3774 to 1\nC) 725 to 1\nD) ","C"},{"What is the name of the storm tropper who guards the millenium falcon in "A New Hope"?\nA) tk-427\nB) his name isnt given in the movie\nC) tk-528\nD) tk-421","D"},{"what is the form of "The Destoyer" in Ghostbusters?\nA) a camera tripod\nB) the stay puff man\nC) the michellin man\nD) zuul!","B"},{"Gladriel has the ring of ______\nA) air\nB) earth\nC) fire\nD) water"," D"},{"How many rings were given to the Dwarves (in the halls of stone)\nA) 7\nB) 9\nC) 1\nD) 3","A"},{"What country does Indiana Jones find Marion in?\nA) Brazil\nB) Nepal\nC) China\nD) Eygpt","B"},{"Westly has built up an immunity to ______\nA) sulfur\nB) stab wounds\nC) Iodine\nD) Inconcievableness!","C"},{"Who killed Inigo Montoyas father\nA) Rugen\nB) Westly\nC) andre the giant\nD) Prince humperdinkle","A"},{"Nature always ______\nA) prevails\nB) fails\nC) Finds a way\nD) sucks","C"},{" What weapon kills the "Killer Rabbit of Caerbannog"\nA) The holy pistol of Nee\nB) The flameing sword of fire\nC) The holy hand grenade of antioch\nD)_ the exceptionally long shortsword of the exceptionally tall midget,"C"},{"In the second Harry Potter movie Ron takes on the role of what chess piece?\nA) The king\nB) The knight\nC) the bishop\nD) The queen","B"},{"how many rings were given to the elven kings (under the stars)\nA) 7\nB) 9\nC) 4\nD) 3","D"},{"Who destorys Isengard?\nA) Treebeard\nB) Gandalf\nC) the knights of Rohan\nD) Gondor","A"},{"how old is yoda when he dies?\nA) 10,000\nB) 1,000\nC) 900\nD) 500","C"},{" what is the name of the gungan the capture Jar Jar\nA) a freaking hero\nB) Tarpul\nC) Tarkin\nD) Tarful","B"},{"What alien race leads the Sepertist attack on Naboo?\nA) Nemodians\nB) the sith\nC) the gungans\nD) the mandalorians","A"},{"who was the original template for the clone troopers\nA) Jango fett\nB) Boba Fett\nC) obi-wan\nD) sifo dias","A"},{"What is the name of the rhino-like creature that anakin rides in the Geonosisan arena\nA) Nexu\nB) Ackley\nC) Rancor\nD) Reek","D"},{"What is the name of the Geonosian leader\nA) Poggle the greater\nB) Poggle the lesser\nC) poggle the medium\nD) Wat Tambor","B"},{"Where is Ki-adi-mundi fighting when order 66 is enacted\nA) Mustafar\nB) courscant\nC) Mygeeto\nD) Nemodia","C"},{"Where is Plo-Koon fighting when order 66 is enacted?\nA) Mygeeto\nB) Mustafar\nC) Felucia\nD) Nemodia","D"},{"Which clone commander attempts to kill Obi-wan\nA) Captian Rex\nB) Commander Gree\nC) Commander Cody\nD) Commander Wolfe","C"},{"What is the answer to life, the universe, and everything?\nA) heck if I know\nB) 42\nC) 45\nD) 420","B"},{"Which actor plays the goblin king in "Labrinyth"\nA) David archeletta\nB) Liam neeson\nC) Samuel Jackson\nD) David Bowie ","D"},{"Where is the Holy grail in Monty Python and the Holy Grail?\nA) France\nB) England\nC) INside the stomch of the killer rabbit\nD) Germany","A"},{"What planet was Shiv Palpitine born on?\nA Naboo)\nB) Courscant\nC) Tatooine\nD) Jaku","A"},{"What is the name of the Ewok cheiftan\nA) Wicket\nB) Chirpa\nC) Wedge\nD) Logray","B"},{"What actor plays Fezzik the giant in The Princess Bride?\nA) Andy the giant\nB) Alex the Giant\nC) Arthur the Giant\nD) Andre the Giant","D"},{"How much power is required to travel thorough time?\nA)1.12 GigaWatts\nB) 1.21 Watts \nC) 1.21 GigaWatts\nD) 12.21 GigaWatts,"C"},{"Who changes Megatron into Galvatron\nA) Alapha Trion\nB) The deceptioncon council\nC) Starscream\nD) Unicron","D"},};
	
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
