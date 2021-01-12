/* 
 * helloMultiFunctions.c
 * divide into function.
 * by Jonathan Pernow
 * created 2021-01-12
*/

#include <stdio.h>

void printComma( void )
{
    printf( ", " );
}

void printWord( char* word )
{
    printf( "%s" , word );
}

int main() {
    printWord( "Hello" );
    printComma();
    printWord( "world" );
    printf( "!\n" );
}

/* EOF */