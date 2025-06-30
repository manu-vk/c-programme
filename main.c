/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i,j,k;
	for(i=1; i<5; i++) {
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(k=1; k<5-i; k++) {
			printf(" ");
		}
		for(k=1; k<5-i; k++) {
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}


		printf("\n");
	}

	int l,m,n;
	for(l=1; l<5; l++)
	{
		for(m=0; m<5-l; m++) {
			printf("*");
		}
		for(n=2; n<l*2; n++) {
			printf(" ");
		}
		for(m=0; m<5-l; m++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
