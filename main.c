#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,D,x1,x2;
	printf ("Hello world\n");
	printf ("ax^2+bx+c=0");
	printf ("a=");
	scanf ("%d",&a);
	printf ("b=");
	scanf("%d",&b);
	printf ("c=");
	scanf ("%d",&c);
	D=b*b-4*a*c;
	if (D>=0) 
		{ x1=((-b)+(sqrt(D)))/(2*a);
		  x2=((-b)-(sqrt(D)))/(2*a);
		  printf ("x1=%d; x2=%d",x1,x2);
	    }
	else printf ("error");
		 
	return 0; 
}
