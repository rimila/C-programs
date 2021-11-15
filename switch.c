#include<stdio.h>
int main(){

    char grade = 'B';
    switch(grade){
        case 'A':
        printf("Excelent!\n");
        break;
        case 'B':
        case 'C':
        printf("well done\n");
        break;
        case 'D':
        printf("You passed\n");
        break;
        printf("Better try again\n");
        break;
        default:
        printf("Invalid grade\n"); 
    }
    printf("Your grade is %c\n",grade);
    return 0;
}
