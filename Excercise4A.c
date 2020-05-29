//4. Write a program to play "Paper, Rock or Scissors"//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
	int playerschoice, computerschoice; //declaring variables
	srand(time(NULL));//planting the seed
	printf("Welcome to the rock paper scissors c game!\n");//welcome and instructions
	printf("You already know the rules... ready to play?\n");
	printf("All right, these are your choice options:\n");
    printf("Enter====>\n1 for rock, \n2 for paper, and \n3 for Scissors\n");
	printf("Lets go!. Rock.... Paper.... Scissors.... SHOOT!!!   ");
    scanf("%d", &playerschoice);//getting players choice
 
    computerschoice=rand()%3+1;//getting computers choice (random number in 1-3 range)
    printf("Computer Choose: %d\n", computerschoice);
	
	//win cases
    if(playerschoice==3&&computerschoice==2 || playerschoice==2&&computerschoice==1 || playerschoice==1&&computerschoice==3){
	printf("WINNER, WINNER, CHICKEN DINNER!!!");}//telling the player he won
	//loser cases
    else if(playerschoice==1&&computerschoice==2 || playerschoice==2&&computerschoice==3 || playerschoice==3&&computerschoice==1){
	printf("LOOSER, LOOSER, DRUG ABUSER!!!");}//telling th eplayer he loose
	//draw cases
    else if(playerschoice==1&&computerschoice==1 || playerschoice==2&&computerschoice==2 || playerschoice==3&&computerschoice==3){
	printf("TIE!!!");}//telling the payer its a tie
 
    return 0;
}