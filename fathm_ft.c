// fathm_ft.c - preobrazuyet 2 morskih sazheni v futy

#include <stdio.h>
int main (void)

{

	int feet, fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	printf(" V %d morskih sazhenyah soderzhitsya %d futov!\n", fathoms, feet);
	printf("Da, imenno %d futov!\n", 6 * fathoms);

	return 0;

}

