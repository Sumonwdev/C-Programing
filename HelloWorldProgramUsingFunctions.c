/*
/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com*Example 2: Hello World Program using Functions
 * Lets see the same program using user defined function. In this program we have created a function hello() that prints the message on the screen. We are calling this function in the main() function. To understand user defined functions, read this guide: User Defined Function in C.
*/

#include <stdio.h>
void hello(){
	printf("Hello World");
}
int main()
{
   //Calling a function here
   hello();
   return 0;
}