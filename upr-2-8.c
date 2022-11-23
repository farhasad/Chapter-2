/* upr-2-8.c */
#include <stdio.h>
void one_three (void);
void two (void);
int main (void)
{
	printf("We are starting: \n");
	one_three();
	printf("Thats OK!");
	return 0;
}

void one_three (void)
{
	printf("one \n");
	two();
	printf("three \n");
}

void two (void)
{
	printf("two \n");
}
