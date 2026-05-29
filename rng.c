/*  
    No extra libraries used
    Made and pushed using my phone
    Because I got curious 
    Used Termux and Git to push

    This code works because of hashing and pointers
*/
#include <stdio.h>

int main(void)
{
    int input;
    int n = 99;
    int *p = &n;
    unsigned long number = (unsigned long)(p + 1);
    unsigned long scrambled = (number * 1206306) % 1000;
    unsigned long finalNum = (scrambled % 100) + (scrambled / 100);
    int comp = (int)finalNum;
    printf("Guess the number between 0 to 99!\n");

    for(int i = 0; i < 100; i++){
        printf("~ [Attempt no.%d] Enter your number: ", i + 1);
        scanf("%d", &input);
        
        if(i == 99) {
            printf("Too many attempts! You've lost.\n");
            break;
        } else if(input > 99 || input < 0){
            printf("Please input a valid number! (0-99)\n");
            i--;
        } else if(comp < input){
            printf("Lower\n");
        } else if(comp > input){
            printf("Higher\n");
        } else if(comp == input){
            printf("Congrats on guessing the right number!\n");
            break;
        } else {
            printf("Something went wrong :(\n");
            break;
        }
    }
    return 0;
}
