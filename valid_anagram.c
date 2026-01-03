#include <stdio.h>
#include <string.h>
//string with arr 
int  valid_anagram(char *str1, char *str2)
{
    int i = 0;
    int count[26] = {0};
   while(str1[i] && str2[i])
    i++;
    if(str1[i] != '\0' || str2[i])
    return 0;
    i =0;
    while(str1[i] != '\0')
    {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
        i++;
    }
    while(i < 26)
    {
        if(count[i] != 0)
        return 0;
        i++;
    }
    return (1);
        
}

int main(void)
{
    char str1[] = "danger";
    char str2[] = "garden";

    if (valid_anagram(str1, str2))
        printf("Anagram ✅\n");
    else
        printf("Not anagram ❌\n");

    return (0);
}