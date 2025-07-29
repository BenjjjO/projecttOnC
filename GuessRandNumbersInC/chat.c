#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
// should reply as like someone chats, ("hi whats your name ? how are you@name, do you like to play a number guessing game ?"("yes","no")if yes start the game )

char yesorno;
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    char name[30];
    printf("\nHi  \nWhats Your Name : ");   
    // scanf("%s",&name);
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    printf("how are you %s", name);
    printf("\n%s do you like to play a number guessing game ??", name);

    while (1)
    {

        scanf("%c", &yesorno);
        if (yesorno == 'y' || yesorno == 'Y')
        {
            printf("great lest's start.");
            {

                if (yesorno == 'y')

                    srand(time(0));
                answer = (rand() % MAX) + MIN;
                do
                {
                    printf("\nenter a guess: ");
                    scanf("%d", &guess);
                    if (guess > answer)
                    {
                        printf("Too High !\n");
                    }
                    else if (guess < answer)
                    {
                        printf("Too Low!\n");
                    }
                    else
                    {
                        printf("Correct !! \n");
                    }
                    guesses++;
                } while (guess != answer);
                printf("***************");
                printf("Answer: %d\n", answer);
                printf("Guesses: %d\n", guesses);
                printf("****************");

                break;
            }
        }
        else if (yesorno == 'n' || yesorno == 'N')
        {
            printf("maybe next time you nonguesser");
            break;
        }
        else
        {
            printf("you did not enter 'yes' or 'no'.please enter yes or no: ");
        }
    }

    return 0;
}