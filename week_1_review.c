#include<stdio.h>

int main()
{
const int inty = 2;
int three = 3;
char chary = 'C';
float floaty;
printf("\nThis is an constant integer: %d\n\nThis is a char: %c\n\n", inty, chary);
printf("Please enter a float:");
scanf("%f", &floaty);
printf("\nThis is a float: %f\n\n", floaty);
if (inty > floaty) {
	printf("\nFloat is less then %d\n\n", inty);
} else {
	printf("\nFloat is greater then %d\n\n", inty);
}
int integer_division = inty / three;
float type_conv = (float)inty / three;
printf("\nInt Div: %d\n\n Float convert: %f\n\n", integer_division, type_conv);
double really_big_double = 10897342.864781263792734982170489710;
printf("\nDouble: %lf\n\n", really_big_double);

}
