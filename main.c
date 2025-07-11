/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i,j,k,l;
	for(i=1; i<8; i++) {
		for(j=1; j<13-i; j++) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {

			printf("* ");
		}
		printf("\n");
	}
	for(i=3; i<10; i++) {
		for(j=1; j<13-i; j++) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {

			printf("* ");
		    
		}
	    printf("\n");
	}
	for(i=5; i<12; i++) {
		for(j=1; j<=12-i; j++) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {

			printf("* ");
		    
		}
	    printf("\n");
	
}
for(i=1;i<3;i++){
    	for(j=1; j<10; j++) {
			printf(" ");
    	}
    for(l=1;l<3;l++){
        printf("* ");
    }
    printf("\n");
}

return 0;
}