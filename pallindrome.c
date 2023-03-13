#include<stdio.h>
int main()
{	
	int no,rm=0,rv=0,temp;
	printf("Enter the no: ");
	scanf("%d",&no);
	temp=no;
	
	while(no>0)
	{
		rm=no%10;
		rv=rv*10+rm;
		no=no/10;	
	}
	if(temp==rv)
		printf("\nNo is Pallindrome");
	else
		printf("\nNo is NOT Pallindrome");
}
