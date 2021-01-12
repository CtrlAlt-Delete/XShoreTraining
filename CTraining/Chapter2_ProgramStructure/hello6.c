/* 
 * hello6.c
 * General greeting functions.
 * by Jonathan Pernow
 * created 2021-01-12
*/

#include <stdio.h>

void printAGreeting( char* greeting )
{
    printf( "%s" , greeting );
}

void printAComma( void )
{
    printf( ", " );
}

void printAnAddressee( char* aName )
{
    printf( "%s", aName);
}

void printANewLine()
{    
    printf( "\n" );
}

void printGreeting( char* aGreeting , char* aName )
{
    printAGreeting( aGreeting );
    printAComma();
    printAnAddressee( aName );
    printANewLine();
}

int main()
{
    printGreeting( "Hi" , "Bub" );
}