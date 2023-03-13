// compare two strings by ignoring case
// string1: Hello Folks, string2: hello folks
// output: Both are Same

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50];
    int i, j, flag= 0;

    printf("Enter First String\n");
    gets(s1);
    printf("Enter Second string\n");
    gets(s2);

// using library function 
    // int res= strcmpi(s1, s2);
    //  if(res== 0)
    //     printf("\nSame");
    // else
    //     printf("\nNOT Same");

    i= 0;
    while(s1[i]== s2[i]+32 || s1[i]== s2[i]-32 || s1[i]== s2[i])
    {
        if(s1[i]== '\0' || s2[i]== '\0')
            break;

        i++;
    }

    if(s1[i]== '\0' && s2[i]== '\0')
        printf("\nSame");
    else
        printf("\nNOT Same");
        
    return 0;
}