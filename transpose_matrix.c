// transpose of matrix (means convert the rows into columns & columns into rows)
/* input     output
   1   2     1  3  5
   3   4     2  4  6
   5   6
*/

#include <stdio.h>
int main()
{
	int fm[10][10],trans[10][10];
	int i, j, r=0, c=0;
	
	printf("Enter no of rows & columns of Matrix:\n");
	scanf("%d%d",&r, &c);

	printf("\nEnter elements of 1 Matrix:\n");
		
	for(i= 0; i< r; i++)
	{
		for(j= 0; j< c; j++)
		{
			scanf("%d", &fm[i][j]);
		}
	}
	printf("\nInputed Matrix= \n");
	for(i= 0; i< r; i++)
	{
		for(j= 0; j< c; j++)
		{
			printf("%d\t",fm[i][j]);
        }
		printf("\n");
	}
		
	for(i= 0; i< r; i++)
	{
		for(j= 0; j< c; j++)
		{
			trans[j][i]= fm[i][j];
		}
	}

	printf("\nTranspose of Matrix\n");

	for(i= 0; i< c; i++)
	{
		for(j= 0; j< r; j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

