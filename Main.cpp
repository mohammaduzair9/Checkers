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

}

//function definition menu
int menu(){

}

/*function definition welcome screen*/
void welcome(){

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
