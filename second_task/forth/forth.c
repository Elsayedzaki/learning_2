#include <stdio.h>
int character = 0;

int main(void){
    printf("Enter a number: ");
    scanf("%c", &character);
    
    if(((character > 'a') && (character < 'z')) || ((character > 'A') && (character < 'Z'))){
        printf("The input is alphabet.");
    }
    else{
        printf("The input is not alphabet.");
    }
    return 0;
}