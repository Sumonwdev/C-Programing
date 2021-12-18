/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com*/
//Example2: Creating a void user defined function that doesn’t return anything
#include <stdio.h>

/* function return type is void and it doesn't have parameters*/
void introduction()
{
    printf("hello programar\n");
    printf("We practice examples C Programing\n");
    printf("Thanks for all\n");
    printf("happy programing\n");
    /* There is no return statement inside this function, since its
     * return type is void
     */
}
int main()
{
    /* Calling function*/
    introduction();
    return 0;
}

/*hello
We practice examples C Programing
Thanks for all
happy programing*/
