#include<stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{
srand(time(NULL));
int guess=-1;
int number = rand()%101;
int count =0;
printf("Guess a number between 0 and 100\n");


while(guess!=number){
count++;

scanf("%d",&guess);

if(guess==number){
    printf("Hooray ^_^    ^0^\nYOU GOT THE NUMBER IN %d GUESSES\nTHE NUMBER WAS %d\nDeveloped By Vikas", count , number);
}
else if(guess>number){
    printf("guess a smaller number\n");
}
else {
    printf("guess a larger number\n");
}

}

return 0;
}