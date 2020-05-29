// 2. Write a program to check whether a number is even or odd. //

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int number;//variable declaration
printf("enter a number:\n");
scanf("%d", &number);//getting the number
if(number%2==0)//condition for it to be even
printf("Thats an even number!");//print for even case
else
printf("Thats an odd number!");//print for odd case
return 0;
}