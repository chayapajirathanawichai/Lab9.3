#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0,c=0;
 
    printf ("Enter the First string:\n"); //want delete
    fflush (stdin); //clear memory
    gets (str1); //input string
 
    printf ("Enter the Second string:\n"); //main text
    gets (str2);
 
    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j]) //if str2 have some alpha same str1=delete
            {
            	c++;
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
        if(c>0){
        	printf("%c was removed %d times\n",str1[i],c);
		}
		else printf("'%c' was not found\n",str1[i]);
    }
 
    printf ("On removing characters from second string we get: %s\n", str_rem);
 
    return 0;
}
