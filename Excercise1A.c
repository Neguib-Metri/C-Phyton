//1. Write a program to input any character and check whether it is alphabet, digit or special character. //

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ng; //variable//
	//getting char from user//
    printf("Enter a single character:\n");
    scanf("%c", &ng);

	//alphabeth check(capital or lowercase)
    if((ng>='a'&&ng<='z') || (ng>='A'&&ng<='Z'))
    {
        printf("'%c' is a letter!", ng);
    }
    else if(ng >= '0' && ng <= '9')//checking if char is a number
    {
        printf("'%c' is a digit!", ng);
    }
    else //if it is not a letter or number, print "special character"
    {
        printf("'%c' is a special character!", ng);
    }

    return 0;
}