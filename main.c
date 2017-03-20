#include <stdio.h>


int main() {

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);
    
    // method 1

    if (year % 400 == 0){
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
    }


    return 0;
}
