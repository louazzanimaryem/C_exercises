#include <stdio.h>
/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
int camelcase(char* s) 
{
    int i = 0;
    int count = 1;
    while(s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
        i++;
    }
return count;

}
