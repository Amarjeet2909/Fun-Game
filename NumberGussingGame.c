#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int number , guess , attempts=1;
srand(time(0));
number=rand()%100+1;//Generating random number between 1 to 100

//keep running the loop until the number is guessed
do{
    printf("Enter the number between 1 to 100::\n");
    scanf("%d",&guess);

    if(guess>number){
        printf("Enter lower numer please!!\n");
    }
    else if(guess<number){
        printf("Enter higher number please!!\n");
    }
    else{
        printf("You sucessfully Guessed the number in %d attempts\n",attempts);
    }
    attempts++;
}while(guess!=number);
return 0;
}