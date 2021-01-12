/* 
 * hello4.c
 * General greeting functions.
 * by Jonathan Pernow
 * created 2021-01-12
*/

#include <stdio.h>

void printGreeting(char* greeting, char* who) 
{ 
    printf("%s, %s!\n", greeting, who);
}

int main()
{ 
    printGreeting("Hello", "world");
    printGreeting("Good day", "Your Royal Highness");
    printGreeting("Howdy", "John Q. and Jane P. Doe");
    printGreeting("Hey", "Moe, Larry, and Joe");

}