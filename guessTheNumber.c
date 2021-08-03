#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int randomNumber=0;
int guess=0;
int maxguess=5;
time_t t;
srand((unsigned) time(&t));
randomNumber= rand() %21;
printf("\nthis is a guessing game");
printf("\n chose no between 0 to 20\n");
for(maxguess = 5 ; maxguess > 0; --maxguess )
{
printf("\n you have %d tr%s left", maxguess,maxguess==1 ? "y" : "ies");
printf("\nEnter a guess:");
scanf("%d",&guess);

if(guess==randomNumber)
{
printf("\n you guessed it right\n");
break;
}
else if(guess<0 || guess>20)
printf(" enter no between 0 to 20\n");
else if(randomNumber>guess)
printf("sorry,%d is wrong. My no is greater than that\n");
else if(randomNumber<guess)
printf("sorry,%d is wrong. My no is smaller than that\n");
}
printf("\n you have finished your tries.the no was%d \n",randomNumber);
return 0;
}
