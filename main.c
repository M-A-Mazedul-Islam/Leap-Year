#include <stdio.h>


int main() {

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);
    
    // method 1

    /* if (year % 400 == 0){
        printf("This is a leap year");
    }
    else if (year % 100 == 0)
    {
        printf("This is not a leap year");
    }
    else if (year % 4 == 0)   {
        printf("This is a leap year");
    }
    else  {
        printf("Year can not be negative");
    } */

    // method 2 

     if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("LY");
    else
        printf("Not LY!");


    // method 3 
    
/*    if (year % 4 == 0){
        if (year % 400 == 0)
            printf("LY!");
        else if (year % 100 == 0)
            printf("Not LY!");
        }
    else
        printf("Not LY!");
*/
    return 0;
}
