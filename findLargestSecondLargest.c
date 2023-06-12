//find largest & second largest no of array
// arr[7]={34,58,41,61,22}
//output: Largest= 61
//Second Largest= 58

#include <stdio.h>
int main()
{
    int arr[50];
    int i, size, large= 0, secondLarge= 0;

    printf("Enter array length: ");
    scanf("%d",&size);

    printf("Enter array element:\n");
    for(i= 0; i< size; i++)
        scanf("%d",&arr[i]);

    large=secondLarge=arr[0];

    for(i= 1; i< size; i++)
    {
        if(arr[i]> large)
        {
            secondLarge= large;
            large= arr[i];
        }
        else if(arr[i]> secondLarge && arr[i]< large)
            secondLarge=arr[i];
    }

    printf("\nLargest Element: %d",large);
    printf("\nSecond Largest= %d",secondLarge);

    return 0;
}
