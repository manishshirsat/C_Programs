/* 	armstrong no means cube of each digit & there sum
	is equal to original no */
#include <stdio.h>
int main()
{
	int no,rm=0,sum=0,temp;
	printf("Enter the no: ");
	scanf("%d",&no);
	temp=no;
	
	while(no>0)
	{
		rm=no%10;
		sum=sum+(rm*rm*rm);
		no=no/10;
	}
	if(temp==sum)
		printf("\nNo is Armstrong");
	else
		printf("\nNo is NOT Armstrong");
		
}
