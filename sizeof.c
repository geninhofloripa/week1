#include <stdio.h>


int main(void)
{
    char c;
    int i;
    float f;
    double d;
    
    printf( "char:%ld\n",   sizeof(c) );
    printf( "int:%ld\n",    sizeof(i) );
    printf( "float:%ld\n",  sizeof(f) );
    printf( "double:%ld\n", sizeof(d) );
}
