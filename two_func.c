/* two_func.c -- programma, v kotoroi ispolzuetsya 2 funkcii v 1 faile */
#include <stdio.h>
void butler(void); /* prototip funkcii v standarte ISO/ANSI C */
int main (void)
{
	printf("Ya vyzyvayu dvoretskogo.\n");
	butler();
	printf("Da. prinisite mne chai i DWD-RW.\n");

	return 0;
}
 void butler(void) /* nachalo opredeleniya funkcii */
{
	printf("Vy zvonili, sir?\n");
}
