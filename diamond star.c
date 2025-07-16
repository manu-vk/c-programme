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
	for(i=1; i<14; i++) {
	    if(i%2!=0){

		for(j=1; j<=13-i; j++) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {
		
				printf("* ");
		    
		}
			printf("\n");

		}
	}
		for(i=1; i<12; i++) {
		    if(i%2!=0) {

			for(j=0; j<=i; j++) {
				printf(" ");
			}
			for(k=1; k<=12-i; k++) {
				
					printf("* ");
				}
				
				printf("\n");
		}
		}
		return 0;
	}
	
