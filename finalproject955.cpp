//project.cpp
//VERSION 1
//June 22, 2016
//Evyatar Saias, Flavio Leon, 



#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;
const int SIZE =3;

//Return type: void
//Parameters: none
//Purpose: Display cool title
void DisplayCooltitle();

//Return type: void
//Parameters: none
//Purpose: Display the rules/story line
void DisplayRules();

//Return type: int
//Parameters: none
//Purpose: This function Prompt the user for menu choice 2 and stores it.
int MenuChoiceTwoCaseone();

//Return type: None
//Parameters: string by refrence
//Purpose: This function Prompt the user his or her name and stores it.
void GetName(string &name);

//Return type: int
//Parameters: None
//Purpose: This function returns the score a that player recives after choosing the battle axe.
int Axe();



//Return type: int
//Parameters: None
//Purpose: This function returns the score that a player recives after choosing the Valerian Sword.
int ValerianSword();

//Return type: int
//Parameters: None
//Purpose: This function returns the score a that player recives after choosing the Enchanted Crossbow.
int EnchantedCrossbow();


//Return type: void
//Parameters: none
//Purpose: Display the story line for menu choice 3
void DisplayStory3();


//Return type: int
//Parameters: none
//Purpose: This function Prompt the user for menu choice 3 and stores it.
int MenuChoiceThree();

//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after Drinking the Guinness.
int DrinkGuinness(int);

//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after Eating the Hagga Snake Meal.
int EatHaggaSnakeMeal(int);


//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after Eating the Vulture Gizzards.
int EatVultureGizzards(int);


//Return type: void
//Parameters: none
//Purpose: Display the story line for menu choice 3
void DisplayStory4();


//Return type: int
//Parameters: none
//Purpose: This function Prompt the user for menu choice 4 and stores it.
int MenuChoiceFour();


//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after choosing Forego All Coats For BattleShield.
int ForegoAllCoatsForBattleShield(int);

//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after choosing the Husky Fur Coat.
int HuskyFurCoat(int);

//Return type: int
//Parameters: 1 int
//Purpose: This function returns the score a that player recives after choosing the Layers Of Raccoon Leather.
int LayersOfRaccoonLeather(int);


//MENU CHOICE 5 FROM HERE:

//Return type: void
//Parameters: none
//Purpose: Display the story line for menu choice 5
void DisplayStory5();

//Return type: int
//Parameters: 1 int
//SnakeHeadOff function for menu 5
int SnakeHeadOff(int);

//Return type: int
//Parameters: 1 int
//OilLamp function for menu 5
int OilLamps(int);

//Return type: int
//Parameters: 1 int
//ShootSnakes function for menu 5
int ShootSnakes(int);


//Return type: int
//Parameters: 1 int
//Menu 5
int MenuChoiceFive();

//Return type: void
//Parameters: 1 int
//Purpose: This function returns a conclusion paragraph based upon the player's final score.
void DisplayAccordingToTotalScore(int);


//Return type: void
//Parameters: 1 int
//Purpose: This function returns a conclusion paragraph based upon the player's final score.
void UpdateHighScores(string[], int[]);

//Return type: void
//Parameters: 1 int array, 1 string array
//Purpose: This function reads in scores 
void ReadinScores (string[], int[]);

//Return type: void
//Parameters: 1 int array, 1 string array, 1 string , 1 int
//Purpose: This function compares scores
void CompareScores(string[], int[],string , int );

//UNTIL HERE



int main()
{

//DECLARE AND INITIALIZE VARIABLES
string uName;
string userName[SIZE];
int highScore[SIZE] = {0};
int menuChoice1 = 0,menuChoice2 = 0, menuChoice3 = 0,menuChoice4 = 0, menuChoice5 = 0;
int score = 0, total = 0;
int random32 = 0, random33 = 0, random41 = 0;


//INTRODUCTION

DisplayCooltitle();

//PROMPT FOR NAME
GetName(uName);

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

//SWITCH STATEMENT
switch(menuChoice1)
{
	case 1:
	//DISPLAY STORYLINE/RUlES
	DisplayRules();
	break;

	case 2:
		
		//DISPLAY MENU CHOICE TWO & PROMPT FOR MENU CHOICE
		score = 0;		
		do
		{
		menuChoice2 = MenuChoiceTwoCaseone();
		
		//SWITCH STATMENT FOR MENU CHOICE TWO
		switch(menuChoice2)
		{	
		case 1:
		score+= Axe();
		break;

		case 2:
		score+= ValerianSword();
		break;

		case 3:
		score+= EnchantedCrossbow();
		break;
		
		default:
		cout<<"\nINVALID. PLEASE CHOOSE AN OPTION 1-3 FROM MENU\n"<<endl;
		}
		}
		while(menuChoice2 !=1 && menuChoice2 !=2 && menuChoice2 !=3);
		
		//DISPLAY MENU CHOICE THREE & PROMPT FOR MENU CHOICE
		DisplayStory3();
		
		do
		{
		menuChoice3 = MenuChoiceThree();
		
		//SWITCH STATMENT FOR MENU CHOICE THREE
		switch(menuChoice3)
		{
			case 1:
			score+= DrinkGuinness(score);
			break;

			case 2:
			score+= EatHaggaSnakeMeal(score);
			break; 

			case 3:
			score+= EatVultureGizzards(score);
			break;
			
			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;
		}
		}
		while(menuChoice3 !=1 && menuChoice3 !=2 && menuChoice3 !=3);
		
		//DISPLAY MENU CHOICE FOUR
		DisplayStory4();
		
		do
		{
		
		menuChoice4 = MenuChoiceFour();
		
		//SWITCH STATMENT FOR MENU CHOISE FOUR
		switch(menuChoice4)
		{
			case 1:
			score+= ForegoAllCoatsForBattleShield(score);
			break;

			case 2:
			score+= HuskyFurCoat(score);
			break;

			case 3:
			score+= LayersOfRaccoonLeather(score);
			break;

			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;

		}
		}
		while(menuChoice4 !=1 && menuChoice4 !=2 && menuChoice4 !=3);
		
		
		
		//DISPLAY STORY LINE OF MENU FIVE
		DisplayStory5();
		
		do
		{
		//DISPLAY MENU FIVE & PROMPT USER FOR CHOICE
		menuChoice5 = MenuChoiceFive();
		//SWITCH STATMENT FOR MENU CHOICE FIVE
		switch(menuChoice5)
			{
			case 1:
			score+=SnakeHeadOff(score);	
			break;

			case 2:
			score+=OilLamps(score);
			break;

			case 3:
			score+=ShootSnakes(score);	
			break;

			default:
			cout<<"\nINVALID. MUST CHOOSE OPTION 1-3 FROM MENU\n"<<endl;


		
			}
		}
		while(menuChoice5 !=1 && menuChoice5 !=2 && menuChoice5 !=3);
		


	//break;

		//DISPLAYS ACCORDING TO TOTAL SCORE IF STRUCTURE
DisplayAccordingToTotalScore(score);

//break;

	

	case 3:
	cout<<"\nGOOD BYE!"<<endl;
	break;
	
	default:
	cout<<"\nINVALID. MUST CHOOSE 1-3 FROM THE MAIN MENU\n"<<endl;
}
}

while(menuChoice1 != 3);


//READ FROM highscore.txt FILE
ReadinScores(userName, highScore);

//COMPARES SCORES
CompareScores( userName, highScore, uName,score );



//UPDATE SCORES



UpdateHighScores(userName, highScore);


return 0;


}





void DisplayCooltitle()
{

cout<<"\n\nWELCOME TO THE BARDS TALE! GOOD LUCK ON YOUR JOURNEY!!\n\n";

cout<<"####### #     # #######    ######     #    ######  ######  ###  #####     #######    #    #       ####### \n";
cout<<"   #    #     # #          #     #   # #   #     # #     # ### #     #       #      # #   #       #       \n";
cout<<"   #    #     # #          #     #  #   #  #     # #     #  #  #             #     #   #  #       #       \n";
cout<<"   #    ####### #####      ######  #     # ######  #     # #    #####        #    #     # #       #####    \n";
cout<<"   #    #     # #          #     # ####### #   #   #     #           #       #    ####### #       #        \n";
cout<<"   #    #     # #          #     # #     # #    #  #     #     #     #       #    #     # #       #        \n";
cout<<"   #    #     # #######    ######  #     # #     # ######       #####        #    #     # ####### #######  \n";

}


//Purpose: Display the rules/story line
void DisplayRules()
{

	cout<<"\nThe Bard's Tale\n\n";

	cout<<"Local Blacksmith Deckard from Cimmeria. Has refused to make weapons for Thulsa Doom leader of a cult group 	intent on taking over the world."<<endl;
	cout<<"In response Thulsa Doom has kidnapped his wife and is holding her hostage threatening her death if he does not comply."<<endl;
	cout<<"Being in contrast to Thulsa Doom's religious views, Deckard has embarked on a journey to Mt.DOOM, Thulsa's fortress which is heavily protected by his minions.\n"<<endl;


	cout<<"Rules:"<<endl;

	cout<<"You will have an array of choices during your quest....choose wisely and your tale will succeed. Choose imprudently and you will faulter.\n"<<endl;
	cout<<"**************************************************"<<endl;
}



//Purpose: This function Prompt the user for menu choice 2 and stores it.
int MenuChoiceTwoCaseone()
{
int menuChoice2 = 0;
cout<<"\nBefore you leave the town of Cimmeria you are faced with the choice of weapons."<<endl;
		cout<<"The long used in battle and with the most fame and legacy the Battle Axe is the weapon of choice for Cimmerians."<<endl;
		cout<<"The Valerian Sword a weapon of your own design forged in your own foundry by your own hand, and well marinated in the battles of your past."<<endl;
		cout<<"And last but not least the Enchanted Crossbow brought to you by a distant muse of Eastwick endowed with magical properties of questionable roots."<<endl;
		
		do
		{
		
		cout<<"\nChoose your weapon: "<<endl<<endl;
		cout<<"1)Battle Axe"<<endl;
		cout<<"2)Valerian Sword"<<endl;
		cout<<"3)Enchanted Crossbow"<<endl;
		cin>>menuChoice2;
		if( menuChoice2 != 1 && menuChoice2 != 2 && menuChoice2 != 3)
			{
				cout<<"\nINVALID. Please enter an number from the menu choice.\n"<<endl;
			}
		}
		while(menuChoice2 != 1 && menuChoice2 != 2 && menuChoice2 != 3);
 	
	return menuChoice2;
}


//Purpose: This function Prompt the user his or her name and stores it.
void GetName(string &name)
{
	
	cout<<"\nPlease enter your first name: ";
	cin>>name;

}

//Purpose: This function returns the score a player recives after choosing the battle axe.
int Axe()
{
	int score = 0;
		cout<<"\nYou chose the Battle Axe. Plus 20 points!!"<<endl;
		score+= 20;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
	
	return score;
}

//Purpose: This function returns the score a player recives after choosing the Valerian Sword.
int ValerianSword()
{
	int score = 0;
		cout<<"\nYou chose the Valerian Sword. Plus 50 points!!"<<endl<<endl;
		score+= 50;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;

	return score;
}

//Purpose: This function returns the score a that player recives after choosing the Enchanted Crossbow.
int EnchantedCrossbow()
{
	int score = 0;
		cout<<"\nYou chose the Enchanted Crossbow. Plus 35 points!!"<<endl<<endl;
		score+= 35;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
	return score;
}



//Purpose: Display the story line for menu choice 3
void DisplayStory3()
{
		cout<<"\nYou are halfway to the base of MT.DOOM!"<<endl;
		cout<<"In your haste you've left without nourishment and will now stop before continuing towards"; 
		cout<<"your possible demise to fill your belly."<<endl; 
		cout<<"You have some choices to help you along your way remember the mountain itself carries its' own "; 		cout<<"perils."<<endl;
}


//Purpose: This function Prompt the user for menu choice 3 and stores it.
int MenuChoiceThree()
{
	int menuChoice3 = 0;		
	do
	{

		cout<<"\nChoose your meal: "<<endl<<endl;
		cout<<"1)Drink Guinness"<<endl;
		cout<<"2)Eat Hagga snake meal"<<endl;
		cout<<"3)Eat Vulture gizzards"<<endl;
		cin>>menuChoice3;
	if(menuChoice3 != 1 && menuChoice3 != 2 && menuChoice3 != 3)
	{
		cout<<"\nINVALID. Please enter an number from the menu choice.\n"<<endl;
	}
	}	
	while(menuChoice3 != 1 && menuChoice3 != 2 && menuChoice3 != 3);	
	
	return menuChoice3;
}

//Purpose: This function returns the score a that player recives after Drinking the Guinness.
int DrinkGuinness(int score)
{
	
		
		cout<<"\nYou chose to drink Guinness. Plus 100 points!!"<<endl;
		score+= 100;
		cout<<"Your total score so far: "<<score<<endl;			
		cout<<"**************************************************"<<endl;	
	return score;


}

//Purpose: This function returns the score a that player recives after Eating the Hagga Snake Meal.
int EatHaggaSnakeMeal(int score)
{
	int random32 = 0;		
		srand(time(NULL));
		random32 = rand()%10 + 45;
		score+= random32;
		cout<<"\nYou chose to eat Hagga snake meal. "<<"Plus"<<" "<<random32<<" "<<"points!!"<<endl;
		cout<<"Your total score so far: "<<score<<endl;			
		cout<<"**************************************************"<<endl;
	return score;

}

//Purpose: This function returns the score a that player recives after Eating the Vulture Gizzards.
int EatVultureGizzards(int score)
{
	int random33 = 0;		
		random33 = rand()%10 + 25;
		score+= random33;
		cout<<"\nYou chose to eat  Vulture gizzards. "<<"Plus"<<" "<<random33<<" "<<"points!!"<<endl;
		cout<<"Your total score so far: "<<score<<endl;			
		cout<<"**************************************************"<<endl;
	return score;

}

//Purpose: Display the story line for menu choice 3
void DisplayStory4()
{
		cout<<"\nYou have reached the base of MT. DOOM and the temperature has already begun to drop."<<endl;
		cout<<"Your wolves cannot travel past this point and you will travel alone."<<endl;
		cout<<"Before continuing you must choose to dress for the weather between a Husky Fur coat or 4 Layers of ";
		cout<<"raccoon leather."<<endl;
		cout<<"And last but not least forego all environmental protection in favor of you BattleShield. Choose "; 			
		cout<<"wisely:"<<endl;

}



//Purpose: This function Prompt the user for menu choice 4 and stores it.
int MenuChoiceFour()
{
	int menuChoice4 = 0;
		
	do
	{
		cout<<"\nChoose gear against weather"<<endl<<endl;
		cout<<"1)Forego all coats for BattleShield"<<endl;
		cout<<"2)Husky Fur coat"<<endl;
		cout<<"3)Layers of raccoon leather"<<endl;
		cin>>menuChoice4;
	if(menuChoice4 != 1 && menuChoice4 != 2 && menuChoice4 != 3)
		{
			cout<<"\nINVALID. Please enter an number from the menu choice.\n"<<endl;

		}
	}
	while(menuChoice4 != 1 && menuChoice4 != 2 && menuChoice4 != 3);
	
	return menuChoice4;
}

//Purpose: This function returns the score a that player recives after choosing to Forego All Coats For BattleShield.
int ForegoAllCoatsForBattleShield(int score)
{
	int random41 = 0;	
		random41 = rand()%10 +55;
		score+= random41;
		cout<<"\nYou chose the Forego all coats for BattleShield. "<<"Plus"<<" "<<random41<<" "<<"points!!"<<endl; 			cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
	return score;
}


//Purpose: This function returns the score a that player recives after choosing to the Husky Fur Coat.
int HuskyFurCoat(int score)
{
		cout<<"\nYou chose the Husky Fur coat. Plus 50 points!!"<<endl;
		score+= 50;
		cout<<"Your total score so far: "<<score<<endl;			
		cout<<"**************************************************"<<endl;
	return score;

}

//Purpose: This function returns the score a that player recives after choosing the Layers Of Raccoon Leather.
int LayersOfRaccoonLeather(int score)
{
		score+= 100;
		cout<<"\nYou chose the Layers of raccoon leather. Plus 100 points!!\n\n"<<endl<<endl;
		cout<<"Your total score so far: "<<score<<endl;
		cout<<"**************************************************"<<endl;
	return score;

}


// FROM HERE

//Purpose: Display the story line for menu choice 5
void DisplayStory5()
{
		cout<<"You are inside the MT.DOOM and have thwarted several of Thulsa's henchmen."<<endl;
		cout<<"It has long been rumored that Thulsa can transform into a snake when facing perils."<<endl;
		cout<<"You are now facing a snake the size of a dinosaur."<<endl;
}



// Score for SnakeHeadOff
int SnakeHeadOff(int score)
{

			cout<<"\nYou chose to attempt to chop the snake's head off. Plus 50 points!!"<<endl;
			score+= 50;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
			
return score;

}


//Score for OilLamps
int OilLamps(int score)
{
			cout<<"\nYou chose to Run past the snake and tip over the oil lamps setting the temple ablaze. Plus 30 points!!"<<endl;
			score+= 30;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;

return score;		
}

//Score for ShootSnakes
int ShootSnakes(int score)
{
	
			cout<<"\nYou chose to shoot the snake with arrows and runaway to find your wife. Plus 15 points!!"<<endl;
			score+= 15;
			cout<<"Your total score so far: "<<score<<endl;			
			cout<<"**************************************************"<<endl;
	
return score;	
}

int MenuChoiceFive()
{
	int menuChoice5=0;
		do
		{
		//DISPLAY MENU FIVE & PROMPT USER FOR CHOICE
		cout<<" You have no time to waste what will you do?"<<endl;
		cout<<"\n1)Attempt to chop the snake's head off."<<endl;
		cout<<"2)Run past the snake and tip over the oil lamps setting the temple ablaze"<<endl;
		cout<<"3)Shoot the snake with arrows and runaway to find your wife."<<endl;
		cin>>menuChoice5;
	if(menuChoice5 != 1 && menuChoice5 != 2 && menuChoice5 != 3)
	 			{
	 				cout<<"\nInvalid. Please check yo self\n"<<endl;
	 			}
	    }
		while(menuChoice5 != 1 && menuChoice5 != 2 && menuChoice5 != 3);

		return menuChoice5;
}

void DisplayAccordingToTotalScore(int Score)
{
		
		
		if(Score < 185)
		{
		cout<<"\nYou have survived and entered MT. DOOM!"<<endl;
		cout<<"The hostiles have taken toll on your health. You have saved your wife, but alasThulsa Doom lives to rain terror again."<<endl;
		cout<<"Your wife cannot stop speaking of Thulsa Dooms might.\n\n"<<endl;
		}
		else if(Score <= 260)
		{
		cout<<"\nIt has been a long and arduous journey. Several minions displayed valor but alas could not endure your skill."<<endl; 
		cout<<"You have crippled Thulsa Doom permanently and he has swore vengeance. Your wife is safe once more and overjoyed with your reunion.\n\n"<<endl;
		}
		else if(Score >= 300)
		{
		cout<<"\nYou have past the perilous journey into MT. DOOM. Having thwarted several minions, traveling lightly, and efficiently has payed off."<<endl;
		cout<<"You have saved your wife from captivity and beheaded Thulsa Doom himself!"<<endl;
		cout<<"Surely your tale will be told by many bards. And you will be legend upon entry to Valhalla.\n\n"<<endl;

		}


}
//Read in Scores
void ReadinScores (string userName[], int highScore[])
{
	//declare file pointer for input
	ifstream infile;
	
	//open file
	infile.open("highscore.txt", ios::in);
	
	//read in optimus prime line
	infile>>userName[0]>>highScore[0];
	infile>>userName[1]>>highScore[1];
	infile>>userName[2]>>highScore[2];
	
	//Close file
	infile.close();
}
void CompareScores (string userName[], int highScore[], string uName, int score )
{	
		if (score > highScore[0])
		{
			userName[2] = userName[1];
			highScore[2] = highScore[1];
			userName[1] = userName[0];
			highScore[1] = highScore[0];
			userName[0] = uName;
			highScore[0] = score;
			
			
		}
	
	else if (score > highScore[1])
		{
			userName[2] = userName[1];
			highScore[2] = highScore[1];
			userName[1] = uName;
			highScore[1] = score;
		}
	else if (score >highScore[2])
		{	
			userName[2] = uName;
			highScore[2] = score;
		}
	
}

//Update the high score
void UpdateHighScores(string userName[], int highScore[])
{
	//declare file pointer
	ofstream outfile;
	
	//open highscore text file
	outfile.open("highscore.txt", ios::out);
	
	//write to highscore
	outfile << userName[0]<<"\t"<<highScore[0]<<endl;
	outfile << userName[1]<<"\t"<<highScore[1]<<endl;
	outfile << userName[2]<<"\t"<<highScore[2]<<endl;

	//close file
	outfile.close();
	
	
}


