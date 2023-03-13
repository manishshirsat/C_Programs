
#include <stdio.h>
int main()
{
	int no,f=1;
	printf("Enter any no: ");
	scanf("%d",&no);
	while(no>0)
	{
		f=f*no;
		no--;
	}
	printf("\nFactorial no= %d",f);
}
