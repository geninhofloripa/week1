#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first value:  ");
    scanf("%i", &a);
    printf("Enter the second value:");
    scanf("%i", &b);
    c = a + b;
    printf("%i + %i = %d\n", a, b, c);
}
