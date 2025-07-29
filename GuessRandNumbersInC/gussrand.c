#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h >
// should reply as like someone chats, ("hi whats your name ? how are you@name, do you like to play a number guessing game ?"("yes","no")if yes start the game )

int main()
{
const int MIN = 1;
const int MAX = 100;
int guess;
int guesses;
int answer;

srand(time(0));
answer = (rand()% MAX)+ MIN;

do{
 printf("enter a guess: ");
 scanf("%d",&guess);
 if(guess > answer)
 {
    printf("Too High !\n");
 }
 else if(guess<answer)
 {
    printf("Too Low!\n");
 }
 else{printf("Correct !! \n");}
 guesses++;
}while(guess != answer);
printf("***************");
printf("Answer: %d\n",answer);
printf("Guesses: %d\n",guesses);
printf("****************");

      
return 0 ;
}