//3. Write a program to find maximum between three numbers. //

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
int a,b,c,min,max; //variable declaration
printf("Welcome.\n");
printf("Enter your first number:");//getting the inputs
scanf("%i",&a);
printf("Enter the next number:");
scanf("%i",&b);
printf("Enter the last number:");
scanf("%i",&c);

	if (a>b){//first condition
		max=a;// sorting of numbers
		min=b;
	} else{
		max=b;//first arange for else case
		min=a;
	}
	if (max>c){//adding the last number to the conditionals
		max=max;//if true, nothing changes
	} else{
		max=c;//if the last is the biggest, save it like so
	}
	printf("Maximum number is:%d", max);//pritning result
	
	
return 0;
}
