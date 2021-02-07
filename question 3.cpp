#include<stdio.h>
int main()
{
	float r, d, c, ar;
	printf("enter the radius of the circle\n");
	scanf("%f", &r);
	
	d = r*2;
	c = 2*3.14*r;
	ar= 3.14*r*r;
	
	printf("diameter : %.2f \n",d);
	printf("area: %.2f \n",ar);
	printf("circumference: %.2f \n",c);
	
	return 0;
}
