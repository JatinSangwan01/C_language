#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    //  printf("Random number between 1 and 100: %d\n", randomnumber);
    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed > randomnumber)
        {
            printf(" lower number please\n");
        }
        else if(guessed < randomnumber)
        {
            printf("higher number please\n");
        }
        else{
            printf("Congratulation!!\n");
        }
        no_of_guesses++;
    } while (guessed != randomnumber);

    printf("You guessed the number in %d guesses!", no_of_guesses);
    return 0;
}
