#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Coder.h"

int choice;							//for user choice in menu

/* initializing the board array with pieces as a global array
  -1 for boxes which can not be used
   1 for pieces of player1
   2 for pieces of player2
   0 for unsed usable boxes */

int boxes[8][8] = { {-1, 1,-1, 1,-1, 1,-1, 1 }, 
					{ 1,-1, 1,-1, 1,-1, 1,-1 }, 
					{-1, 1,-1, 1,-1, 1,-1, 1 }, 
					{ 0,-1, 0,-1, 0,-1, 0,-1 }, 
					{-1, 0,-1, 0,-1, 0,-1, 0 }, 
					{ 2,-1, 2,-1, 2,-1, 2,-1 }, 
					{-1, 2,-1, 2,-1, 2,-1, 2 }, 
					{ 2,-1, 2,-1, 2,-1, 2,-1 } };

void main()
{	

}

//function definition position --> sets the position of cursor
void position(int x, int y){
	COORD axis;
	axis.X = x;                                        //set x co-ordinate of screen                    
	axis.Y = y;                                        //set y co-ordinate of screen
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}

//function definition menu
int menu(){
	SetConsoleTitle( TEXT( "Menu - The Checkers" ) );
	system("CLS");                                      //clear the screen
	int option;
	/* Start printing box for menu */
	position(43,5);                                    
	for (int i = 0; i < 62; i++)
		printf("\x16");                                			                              
	puts("");
	for (int row = 0; row < 40; row++)
		printf("\t\t\t\t\t   \x19                                                            \x19\n");
	position(43, 45);
	for (int i = 0; i < 62; i++)
		printf("\x16");
	/* End printing box for menu */    
	position(55, 9);	printf("##     ## ######## ##    ## ##     ##\n");
	position(55, 10);	printf("###   ### ##       ###   ## ##     ##\n");
	position(55, 11);	printf("#### #### ##       ####  ## ##     ##\n");
	position(55, 12);	printf("## ### ## ######   ## ## ## ##     ##\n");
	position(55, 13);	printf("##     ## ##       ##  #### ##     ##\n");
	position(55, 14);	printf("##     ## ##       ##   ### ##     ##\n");
	position(55, 15);	printf("##     ## ######## ##    ##  #######\n");

	char options[4][18] = { { "1. Start game" }, { "2. Instruction" }, { "3. Quit" }, { "Choose option : " } };
	for (int row = 0; row < 4; row++){
		position(55, 20 + 6 * row);                   //set position with difference of six rows
		for (int col = 0; col < 18; col++){
			printf("%c", options[row][col]);          //print options
		}
	}
	scanf_s("%d", &option);                           //read user input for options
	//if user enters 1 then print game mods and ask user to select game mod.
	if (option == 1){
		position(58, 22);
		printf("(a) Player VS Computer\n");
		position(58, 24);
		printf("(b) Player VS Player\n");
		
		char select;
		position(73,38);
		printf(" ");
		position(73,38);
		scanf_s(" %c", &select);                         //read user input for game mod
		getchar();

		if(select=='a' || select=='A')
			return 4;                                    //if user enters 'A' then return 4 as user choice to main func.
		else if(select=='b' || select=='B')
			return 5;                                    //if user enters 'B' then return 5 as user choice to main func.
		else if (select == '2')
			return 2;									 //if user enters '2' then return 2 as user choice to main func.
		else if (select == '3')
			return 3;				                     //if user enters '3' then return 3 as user choice to main func.
		else
			return 0;                                    //if user enters invalid input, return 0 as user choice
	}
	else if (option == 2)
		return 2;				//return 2 as user choice
	else if (option == 3)
		return 3;				//return 3 as user choice
	else
		return 0;               //if user enters invalid input, return 0 as user choice
}

/*function definition welcome screen*/
void welcome(){
	SetConsoleTitle( TEXT( "Welcome To The Checkers" ) );
	system("CLS");
	system("color 3f");														//sperowLocfying color of the Welcome screen
	char coder[2][14] = {{"Developed By:"},{"7H3 c0d3rz"}};
	char names[6][20]=	{{"  \x11 Team Members \x10"},
						 {"-------------------"},
						 {"\x10  Mohammad Uzair \x11"},
						 {"\x10  Fatima Hassan  \x11"},
						 {"\x10 Muhammad Mubeen \x11"},
						 {"\x10   M. Asad Ali   \x11"}};
	char welcome[7][124]={{" ###       ###   ##########   ###        ########     ########      ###   ###    ##########       ###########    ######## "},
	                      {" ###       ###   ###          ###       ###    ###   ###    ###    ##### #####   ###                  ###       ###    ###"},
	                      {" ###       ###   ###          ###       ###          ###    ###   ### ##### ###  ###                  ###       ###    ###"} ,
	                      {" ###  ###  ###   ########     ###       ###          ###    ###   ###  ###  ###  ########             ###       ###    ###"},
	                      {" ### ##### ###   ###          ###       ###          ###    ###   ###       ###  ###                  ###       ###    ###"},
	                      {"  ##### #####    ###          ###       ###    ###   ###    ###   ###       ###  ###                  ###       ###    ###"},
	                      {"   ###   ###     ##########   ########## ########     ########    ###       ###  ##########           ###        ########"}};
	
	/* Start printing the welcome screen with animation */
	for(int row=0;row<7;row++){
		position(16,2+row);								
		for(int col=0;col<124;col++)
			printf("%c",welcome[row][col]);	
		_sleep(200);
	}
	/* End printing the welcome screen with animation */
	printf("\n\n\n");
	_sleep(300);

	printf("\t  /###           /   /                 \t\t         # ###      /                              /                                          \n");
	printf("\t /  ############/  #/                  \t\t       /  /###  / #/                             #/                                           \n");
	printf("\t/     #########    ##                  \t\t      /  /  ###/  ##                             ##                                           \n");
	printf("\t#     /  #         ##                  \t\t     /  ##   ##   ##                             ##                                           \n");
	printf("\t ##  /  ##         ##                  \t\t    /  ###        ##                             ##                                           \n");
	printf("\t    /  ###         ##  /##      /##    \t\t   ##   ##        ##  /##      /##       /###    ##  /##       /##    ###  /###       /###    \n");
	printf("\t   ##   ##         ## / ###    / ###   \t\t   ##   ##        ## / ###    / ###     / ###  / ## / ###     / ###    ###/ #### /   / #### / \n");
	printf("\t   ##   ##         ##/   ###  /   ###  \t\t   ##   ##        ##/   ###  /   ###   /   ###/  ##/   /     /   ###    ##   ###/   ##  ###/  \n");
	printf("\t   ##   ##         ##     ## ##    ### \t\t   ##   ##        ##     ## ##    ### ##         ##   /     ##    ###   ##         ####       \n");
	printf("\t   ##   ##         ##     ## ########  \t\t   ##   ##        ##     ## ########  ##         ##  /      ########    ##           ###      \n");
    printf("\t    ##  ##         ##     ## #######   \t\t    ##  ##        ##     ## #######   ##         ## ##      #######     ##             ###    \n");
	printf("\t     ## #      /   ##     ## ##        \t\t     ## #      /  ##     ## ##        ##         ######     ##          ##               ###  \n");
	printf("\t      ###     /    ##     ## ####    / \t\t      ###     /   ##     ## ####    / ###     /  ##  ###    ####    /   ##          /###  ##  \n");
	printf("\t       ######/     ##     ##  ######/  \t\t       ######/    ##     ##  ######/   ######/   ##   ### /  ######/    ###        / #### /   \n");
	printf("\t         ###       ##    ##    #####   \t\t         ###      ##    ##    #####     #####    ##    ##/    #####     ###           ###/    \n");
	/* Start printing the developers box */
    printf("\n\n\n\t\t\t\t\t\t\t");								
	for (int i=0; i<45; i++)
		printf("\xc2");
	puts("");

	for(int i=0;i<18;i++){
		printf("\t\t\t\t\t\t\t\xc3                                           \xb4\n");
		if (i==3){
			printf("\t\t\t\t\t\t\t\xc3");
			for (int j=0; j<43; j++)
				printf("\x16");
			puts("\xb4");
		}
	}
	printf("\t\t\t\t\t\t\t");
	for(int i=0; i<45;i++)
		printf("\x16");
	/* End printing the developers box */
	puts("");
	/* Start printing team name and team members names */
	for (int row=0; row<2; row++){
		position(64+15*row,31+row);
		for(int col=0; col<14 ; col++){
			printf("%c", coder[row][col]);
			_sleep(25);
		}
		printf("\n");
	}
	for(int row=0;row<6;row++){
		position(68,36+2*row);
		for(int col=0;col<20;col++){		
			printf("%c",names[row][col]);
			_sleep(20);
		}
	}
	/* End printing team name and team members names */
	_sleep(3000);
}

/*function definition for instructions*/
int instruction(){

}

//defining the toss function
int toss(){

}

int tossSelect(){

}	

int tossResult(char select){

}		

//function definition board
void board(){

}

//function definition move Box
void moveBox(){	

}

//function definition move store
void moveStore(int turn, char row, int col,char newRow, int newCol ){	

}

//function definition pieces
void pieces(){

}

//definition of player turn
void playerTurn(int player){

}

//defining the move down function
bool moveDown(int type,int row,int col,int newRow,int newCol){

}

//defining the move up function
bool moveUp(int type, int row,int col,int newRow,int newCol){

}

bool backFor(int type, int row,int col,int newRow,int newCol){

}

//function for checking new kings
void checkKing(){

}

//function for counting pieces of player 1
int countPiecesp1(){

}

//function for counting pieces of player 2
int countPiecesp2(){

}

//function to print result
void win(int result){

}
//function to convert the row names into integers(row numbers) entered by user
int convert(char val){

}

bool timer(int player){

}

bool noMoves(int player){

}
