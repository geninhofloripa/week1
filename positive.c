//demonstration of do/while 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Type a posivite int!! -> ");
        n = GetInt();
    } 
    while (n <= 0);
    printf("You got it! \n");
}

// the variable n has been declared outside the while loop because if it
// had been inside it could not have been used outside for testing
// scope issue
