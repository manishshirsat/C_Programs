#include<stdio.h>
int main()
{
	int n1,n2,a,b,gcd,lcm;
	printf("Enter two no: ");
	scanf("%d%d",&a,&b);
	n1=a;
	n2=b;
	
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	gcd=a;
	lcm=(n1*n2)/gcd;
	printf("GCD= %d",gcd);
	printf("\nLCM= %d",lcm);
}
