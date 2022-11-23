/* upr-2-4.c */
#include <stdio.h>
void jolly (void);
void deny (void);
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}

void jolly (void)
{
	printf("On veselyi molodets !\n");
}

void deny (void)
{
	printf("Nikto ne mozhet eto otritsat'!");
}
