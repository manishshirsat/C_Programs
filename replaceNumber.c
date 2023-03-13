//in array search element and replaced element to new number
//arr[]= {10,20,80,40,50}
//old element 80, new element 30 to be inserted
//new array arr[]= {10,20,30,40,50}

#include <stdio.h>
int main()
{
	int arr[50],sa[50];
	int i, size, search= 0, new= 0, flag= 0;

	printf("Enter array size: ");
	scanf("%d",&size);
	printf("Enter 2D array element:\n");

	for(i= 0; i< size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search: ");
	scanf("%d",&search);
	
	for(i= 0; i< size; i++)
	{
		if(arr[i]== search)
		{
			flag= 1;
			break;
		}
	}
	if(flag== 0)
		printf("\nNumber NOT Found");
	else
	{
		printf("Enter new number: ");
		scanf("%d",&new);
		printf("\nUpdated Array:\n");
		for(i= 0; i< size; i++)
		{
			if(arr[i]==search)
				arr[i]= new;
			printf("%d,",arr[i]);
		}
	}	
	return 0;
}