#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	
	//#01
	
	int x,y,z,m;
	int a,b,c;
	
	x = 1;
	a = 3;
	b = 4;
	c = 5;
	z = 3;
	
	y = a*x*x+b*x+c ;
	m = ( x + y + z) / 3 ;
	
	printf("#1\ny = %d, m = %d \n\n\n", y, m);
	
	// #02
	
	int x2 = 3;
	int cond1, cond2;
	
	cond1 = 2 < x2 && x2 < 5;
	cond2 = x2 > 1 || x2 < 4 && x2 > 3;
	
	printf("#2\ncond1=%d. cond2=%d\n\n\n", cond1, cond2);
	
	
	// #03
	
	int a2;
	int b2;
	
	printf("#3\ninput two integers : ");
	scanf("%d %d", &a2, &b2);
	
	printf("+ result is %d\n", a2+b2);
	printf("- result is %d\n", a2-b2);
	printf("* result is %d\n", a2*b2);
	printf("/ result is %d\n", a2/b2);
	printf("%% result is %d\n", a2%b2);
	
	
	
	return 0;
}
