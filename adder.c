#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Type a number: ");
    int x = GetInt();
    
    printf("Gimme another one: ");
    int y = GetInt();
    
    printf("A soma de %d com %d é %d.\n" , x, y, x+y);
    
}
