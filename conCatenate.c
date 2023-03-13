// Concatenate string 
// 1st string: Welcome To, 2nd string: India
// output: Welcome To India

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50];
    int i, j;

    printf("Enter first string:\n");
    gets(s1);
    printf("Enter second string:\n");
    gets(s2);

    for(i= 0; s1[i]!= '\0'; i++)
        ;
    
    for(j= 0; s2[j]!= '\0' ; j++, i++)
    {
        s1[i]= s2[j];
    }

//also use library function strcat(string1, string2);
    // strcat(s1, s2);
    // printf("Concatenated= %s", s1);
    
    s1[i]= '\0';
    printf("\nConcatenated String:\n");
    printf("%s", s1);

    return 0;
}



// append first n character of a string at the end of another
//  strncat(string1, string2, 6);

/* 
    for(j= 0; s2[j]!= '\0'; j++, i++)
    {
        if(j< n)
        {
            s1[i]= s2[j];
            continue;
        }
        break;
    }
    s1[i]= '\0';
    printf("new:\n");
    printf("%s",s1);         
*/