//project.cpp
//VERSION 1
//June 22, 2016
//Evyatar Saias, Flavio Leon, Kyle Hunter



#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{

//DECLARE AND INITIALIZE VARIABLES
string playerName, player;
int menuChoice1 = 0,menuChoice2 = 0, menuChoice3 = 0,menuChoice4 = 0, menuChoice5 = 0;
int score = 0, highScore = 0, total = 0;
int random32 = 0, random33 = 0, random41 = 0;



//SWITCH STATEMENT
switch(menuChoice1)
{
	case 1:
	//DISPLAY STORYLINE/RUlES
	cout<<"\nThe Bard's Tale\n\n";

cout<<"Local Blacksmith Deckard from Cimmeria. Has refused to make weapons for Thulsa Doom leader of a cult group intent on taking over the world."<<endl;
cout<<"In response Thulsa Doom has kidnapped his wife and is holding her hostage threatening her death if he does not comply."<<endl;
cout<<"Being in contrast to Thulsa Doom's religious views, Deckard has embarked on a journey to Mt.DOOM, Thulsa's fortress which is heavily protected by his minions.\n"<<endl;


cout<<"Rules:"<<endl;

cout<<"You will have an array of choices during your quest....choose wisely and your tale will succeed. Choose imprudently and you will faulter.\n"<<endl;
cout<<"**************************************************"<<endl;
	break;

	case 2:
		
		//DISPLAY MENU CHOICE TWO & PROMPT FOR MENU CHOICE
		cout<<"\nBefore you leave the town of Cimmeria you are faced with the choice of weapons."<<endl;
		cout<<"The long used in battle and with the most fame and legacy the Battle Axe is the weapon of choice for Cimmerians."<<endl;
		cout<<"The Valerian Sword a weapon of your own design forged in your own foundry by your own hand, and well marinated in the battles of your past."<<endl;
		cout<<"And last but not least the Enchanted Crossbow brought to you by a distant muse of Eastwick endowed with magical properties of questionable roots."<<endl;
		
		do
		{
		score = 0;
		cout<<"\nChoose your weapon: "<<endl<<endl;
		cout<<"1)Battle Axe"<<endl;
		cout<<"2)Valerian Sword"<<endl;
		cout<<"3)Enchanted Crossbow"<<endl;
		cin>>menuChoice2;
		
		//SWITCH STATMENT FOR MENU CHOICE TWO
		switch(menuChoice2)
		{	
		case 1:
		cout<<"\nYou chose the Battle Axe. Plus 20 points!!"<<endl;
		score+= 20;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
		break;

		case 2:
		cout<<"\nYou chose the Valerian Sword. Plus 50 points!!"<<endl<<endl;
		score+= 50;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
		break;

		case 3:
		cout<<"\nYou chose the Enchanted Crossbow. Plus 35 points!!"<<endl<<endl;
		score+= 35;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
		break;
		
		default:
		cout<<"\nINVALID. PLEASE CHOOSE AN OPTION 1-3 FROM MENU\n"<<endl;
		}
		}
		while(menuChoice2 !=1 && menuChoice2 !=2 && menuChoice2 !=3);
		
		//DISPLAY MENU CHOICE THREE & PROMPT FOR MENU CHOICE
		cout<<"\nYou are halfway to the base of MT.DOOM!"<<endl;
		cout<<"In your haste you've left without nourishment and will now stop before continuing towards your possible demise to fill your belly."<<endl; 
		cout<<"You have some choices to help you along your way remember the mountain itself carries its' own perils."<<endl;
		
		do
		{
		
		cout<<"\nChoose your meal: "<<endl<<endl;
		cout<<"1)Drink Guinness"<<endl;
		cout<<"2)Eat Hagga snake meal"<<endl;
		cout<<"3)Eat Vulture gizzards"<<endl;
		cin>>menuChoice3;
		
		//SWITCH STATMENT FOR MENU CHOICE THREE
		switch(menuChoice3)
		{
			case 1:
			cout<<"\nYou chose to drink Guinness. Plus 100 points!!"<<endl;
			score+= 100;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			break;

			case 2:
			srand(time(NULL));
			random32 = rand()%10 + 45;
			score+= random32;
			cout<<"\nYou chose to eat Hagga snake meal. "<<"Plus"<<" "<<random32<<" "<<"points!!"<<endl;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			break; 

			case 3:
			random33 = rand()%10 + 25;
			score+= random33;
			cout<<"\nYou chose to eat  Vulture gizzards. "<<"Plus"<<" "<<random33<<" "<<"points!!"<<endl;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			break;
			
			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;
		}
		}
		while(menuChoice3 !=1 && menuChoice3 !=2 && menuChoice3 !=3);
		
		//DISPLAY MENU CHOICE FOUR
		cout<<"\nYou have reached the base of MT. DOOM and the temperature has already begun to drop."<<endl;
		cout<<"Your wolves cannot travel past this point and you will travel alone."<<endl;
		cout<<"Before continuing you must choose to dress for the weather between a Husky Fur coat or 4 Layers of raccoon leather."<<endl;
		cout<<"And last but not least forego all environmental protection in favor of you BattleShield. Choose wisely:"<<endl;
		
		do
		{
		
		cout<<"\nChoose gear against weather"<<endl<<endl;
		cout<<"1)Forego all coats for BattleShield"<<endl;
		cout<<"2)Husky Fur coat"<<endl;
		cout<<"3)Layers of raccoon leather"<<endl;
		cin>>menuChoice4;
		
		//SWITCH STATMENT FOR MENU CHOISE FOUR
		switch(menuChoice4)
		{
			case 1:
			random41 = rand()%10 +55;
			score+= random41;
			cout<<"\nYou chose the Forego all coats for BattleShield. "<<"Plus"<<" "<<random41<<" "<<"points!!"<<endl;
			cout<<"Your total score so far: "<<score<<endl;
			cout<<"**************************************************"<<endl;
			break;

			case 2:
			cout<<"\nYou chose the Husky Fur coat. Plus 50 points!!"<<endl;
			score+= 50;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			break;

			case 3:
			score+= 100;
			cout<<"\nYou chose the Layers of raccoon leather. Plus 100 points!!\n\n"<<endl<<endl;
			cout<<"Your total score so far: "<<score<<endl;
			cout<<"**************************************************"<<endl;
			break;

			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;

		}
		}
		while(menuChoice4 !=1 && menuChoice4 !=2 && menuChoice4 !=3);
		
		
		
		//DISPLAY STORY LINE OF MENU FIVE
		cout<<"You are inside the MT.DOOM and have thwarted several of Thulsa's henchmen."<<endl;
		cout<<"It has long been rumored that Thulsa can transform into a snake when facing 	perils."<<endl;
		cout<<"You are now facing a snake the size of a dinosaur."<<endl;
		
		do
		{
		//DISPLAY MENU FIVE & PROMPT USER FOR CHOICE
		cout<<" You have no time to waste what will you do?"<<endl;
		cout<<"\n1)Attempt to chop the snake's head off."<<endl;
		cout<<"2)Run past the snake and tip over the oil lamps setting the temple ablaze"<<endl;
		cout<<"3)Shoot the snake with arrows and runaway to find your wife."<<endl;
		cin>>menuChoice5;
		//SWITCH STATMENT FOR MENU CHOICE FIVE
		switch(menuChoice5)
		{
			case 1:
			cout<<"\nYou chose to attempt to chop the snake's head off. Plus 50 points!!"<<endl;
			score+= 50;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			
			break;

			case 2:
			cout<<"\nYou chose to Run past the snake and tip over the oil lamps setting the temple ablaze. Plus 30 points!!"<<endl;
			score+= 30;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			break;

			case 3:
			cout<<"\nYou chose to shoot the snake with arrows and runaway to find your wife. Plus 15 points!!"<<endl;
			score+= 15;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			
			break;

			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;


		
		}
		}
		while(menuChoice5 !=1 && menuChoice5 !=2 && menuChoice5 !=3);
		



		//DISPLAYS ACCORDING TO TOTAL SCORE IF STRUCTURE
		if(score < 185)
		{
		cout<<"\nYou have survived and entered MT. DOOM!"<<endl;
		cout<<"The hostiles have taken toll on your health. You have saved your wife, but alasThulsa Doom lives to rain terror again."<<endl;
		cout<<"Your wife cannot stop speaking of Thulsa Dooms might.\n\n"<<endl;
		}
		else if(score <= 260)
		{
		cout<<"\nIt has been a long and arduous journey. Several minions displayed valor but alas could not endure your skill."<<endl; 
		cout<<"You have crippled Thulsa Doom permanently and he has swore vengeance. Your wife is safe once more and overjoyed with your reunion.\n\n"<<endl;
		}
		else if(score <= 300)
		{
		cout<<"\nYou have past the perilous journey into MT. DOOM. Having thwarted several minions, traveling lightly, and efficiently has payed off."<<endl;
		cout<<"You have saved your wife from captivity and beheaded Thulsa Doom himself!"<<endl;
		cout<<"Surely your tale will be told by many bards. And you will be legend upon entry to Valhalla.\n\n"<<endl;
		}


	break;

	

	case 3:
	cout<<"\nGOOD BYE!"<<endl;
	break;
	
	default:
	cout<<"\nINVALID. MUST CHOOSE 1-3 FROM THE MAIN MENU\n"<<endl;
}
}

while(menuChoice1 != 3);

//DECLARE FILE POINTER FOR INPUT AND OUTPUT
ofstream outfile;
ifstream infile;

//OPEN FILE highscore.txt FOR READING HIGH SCORE
infile.open("highscore.txt", ios::in);

//READ FROM highscore.txt FILE
infile>>player>>highScore;

//OPEN FILE highscore.txt FOR OVERWRITING TO FILE
outfile.open("highscore.txt", ios::out);

//WRITE DATA TO FILE
if(score > highScore)
{
	outfile<<playerName<<" "<<score;
}
else if(score <= highScore)
{
	outfile<<player<<" "<<highScore;
}
//CLOSE OUTFILE
outfile.close();

//DISPLAY RESULTS
cout<<"Your total score for this game was: "<<score<<endl;
cout<<"**************************************************"<<endl;

//CLOSE INFILE
infile.close();




return 0;
}



//INTRODUCTION




cout<<"\n\nWELCOME TO THE BARDS TALE! GOOD LUCK ON YOUR JOURNEY!!\n\n";

cout<<"####### #     # #######    ######     #    ######  ######  ###  #####     #######    #    #       ####### \n";
cout<<"   #    #     # #          #     #   # #   #     # #     # ### #     #       #      # #   #       #       \n";
cout<<"   #    #     # #          #     #  #   #  #     # #     #  #  #             #     #   #  #       #       \n";
cout<<"   #    ####### #####      ######  #     # ######  #     # #    #####        #    #     # #       #####    \n";
cout<<"   #    #     # #          #     # ####### #   #   #     #           #       #    ####### #       #        \n";
cout<<"   #    #     # #          #     # #     # #    #  #     #     #     #       #    #     # #       #        \n";
cout<<"   #    #     # #######    ######  #     # #     # ######       #####        #    #     # ####### #######  \n";



//PROMPT FOR NAME
cout<<"\nPlease enter your first name: ";
cin>>playerName; 

//DO WHILE LOOP/SWITCH MENU SHELL
do
{
//DISPLAY MAIN MENU & PROMPT FOR MENU CHOICE
cout<<"\nPlease choose an option from the main menu: "<<endl<<endl;
cout<<"1)See Rules"<<endl;
cout<<"2)Play Game"<<endl;
cout<<"3)Quit"<<endl;
cin>>menuChoice1;
cout<<"**************************************************"<<endl;

