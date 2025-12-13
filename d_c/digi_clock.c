#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
int main ()
{
    int hours = 0;
    int min =0;
    int sec = 0;
  
    printf("Hours :");
    scanf("%d", &hours);
    printf("Min :");
    scanf("%d", &min);
    printf("Sec :");
    scanf("%d", &sec);
    while(true)
   {
    if (sec > 59)
    {
       min++;
       sec = 0;
    }
    if (min > 59)
    {
        hours ++;
        min = 0;
    }
    if (hours > 23)
    {
        hours = 0;
    }
    if (sec % 2 == 0)
     printf("\r%02d %02d %02d", hours, min, sec);
   else
     printf("\r%02d:%02d:%02d", hours, min, sec);
     sec++;
     sleep(1);
    fflush(stdout);
   }
   return 0;
}
