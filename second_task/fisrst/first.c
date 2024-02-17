/* **********************************************************************************************
* @file  : Second_task
* @author: Elsayed Zaki
* @brief : it is to find maximum between three numbers using if condition.
*************************************************************************************************
*/

#include <stdio.h>

int number_1 = 0;
int number_2 = 0;
int number_3 = 0;




int main(void){
    
    printf("Enter the first number: ");
    scanf("%i" ,&number_1);

    printf("Enter the second number: ");
    scanf("%i" ,&number_2);

    printf("Enter the third number: ");
    scanf("%i" ,&number_3);
    
    if((number_1 > number_2) && (number_1 > number_3)){
        printf("The number %i is the maximum", number_1);
    }

    else if((number_2 > number_1) && (number_2 > number_3)){
        printf("The number %i is the muximum", number_2);
    }
    
    else{
        printf("The number %i is the muximum", number_3);
    }

    return 0;
}

/**************************************************************************************************
User                Date                Brief
***************************************************************************************************
Elsayed Zaki        17th faburaury      question_1 add
*/