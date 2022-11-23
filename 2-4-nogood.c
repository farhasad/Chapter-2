/* nogood.c - programma s oshibkami */
#include <stdio.h>
int main(void)
{
	int n,n2,n3;
	/* v etoi programme dopusheno neskolko oshibok */
	n = 5;
	n2 = n*n;
	n3 = n2*n2;
	printf("n= %d, n v kvadrate =%d, n v kube = %d\n", n, n2, n3);
	return 0;
}
