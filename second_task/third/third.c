/* **********************************************************************************************
* @file  : Second_task
* @author: Elsayed Zaki
* @brief : it is to check whether a number is divisible by 5 and 11 or not.
*************************************************************************************************
*/

#include <stdio.h>
int number = 0;

int main(void){
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number){
        if ((number % 5 == 0) &&  (number % 11 == 0)){
            printf("The is divisible by 5 and 11");
        }
        else{
            printf("The is not divisible by 5 and 11");
        }
    }
    else{
        printf("invalid input, please check your input.");
    }
    return 0;
}

/**************************************************************************************************
User                Date                Brief
***************************************************************************************************
Elsayed Zaki        17th faburaury      question_3 add
*/