#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declared int n and assigned it the return value of Getint
    printf("Please give us a number between 1 and 10: ");
    int n = GetInt(); 

    //lets now do a bit of analysis
    if (n >=1  && n < 4)
    {
        printf("You chose a small number!\n ");
    }
    
    
    else if ( n >= 4  && n < 8)
    {
        printf("You picked a medium int!\n");
    }
    
    
    else if (n >=8  &&  n <= 10)
    {
        printf("You picked a large number! \n");
    }
    
    
    else 
    {
        printf("You picked an invalid int! \n");
    }
 }
