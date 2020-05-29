//5. Write a program that display the Zodiacal Sign using the day and month of birth.//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int month;
int day;//variables declaration//
printf("enter your birthday month:\n");
scanf("%i", &month);
printf("enter your birthday day:\n");
scanf("%i", &day);//getting the number
if(month==1)//if borned in january
{
	if(day<=19){
	printf("youre a capricorn");}
	else{printf("youre an acuarus");}
}
if(month==2)//if borned in february
{
	if(day<=19){
	printf("acuario");}
	else{printf("pisces");}
}
if(month==3)//if borned in march
{
	if(day<=20){
	printf("pisces");}
	else{printf("aries, ugh");}
}
if(month==4)//if borned in april
{
	if(day<=20){
	printf("aries");}
	else{printf("taurus");}
}
if(month==5)//if borned in may
{
	if(day<=20){
	printf("youre a taurus");}
	else{printf("youre a gemini");}
}
if(month==6)//if borned in june
{
	if(day<=20){
	printf("gemini");}
	else{printf("cancer");}
}
if(month==7)//if borned in july
{
	if(day<=22){
	printf("cancer");}
	else{printf("leo");}
}
if(month==8)//if borned in august
{
	if(day<=22){
	printf("leo");}
	else{printf("virgo");}
}
if(month==9)//if borned in september
{
	if(day<=22){
	printf("virgo");}
	else{printf("youre a libra");}
}
if(month==10)//if borned in october
{
	if(day<=22){
	printf("libra");}
	else{printf("scorpio");}
}
if(month==11)//if borned in november
{
	if(day<=22){
	printf("scorpio");}
	else{printf("sagitarious");}
}
if(month==12)//if borned in december
{
	if(day<=21){
	printf("sagitarius");}
	else{printf("capricorn");}
}
return 0;
}