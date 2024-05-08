// 
// This is going to be fun We will write a program that generates a Random number and asks the player to guess it  If the player guess is higher than the actual number the program display   *Lower number please Similarly if the users gyess is too low, the program prints " Higher number please When the user guesses the correct number , the program display's the number of guesses the player used to arrive at the number


#include<STDIO.H>
#include<STDLIB.H>
#include<TIME.H>


int main(){
int number , guess ,numGuesses=1;

srand(time(0));
number= rand()%50+1;  //gnereates random number between 1 to 50
printf("the number is %d \n", number);

//keep running the loop until the number is guessed

do
{
    printf("guess the number between 1 to 50 \n");
    scanf("%d", &guess);

    if (guess>number)
    {
        printf("lower number please \n");
    }
    else if(guess < number )
    {
        printf("higher number please \n");
    }
    else{
        printf("you guessed the num in %d  attempts \n", numGuesses);
    }
    numGuesses++;
    
} while (guess!=number);



return 0 ;
}
