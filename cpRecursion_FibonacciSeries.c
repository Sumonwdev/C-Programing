/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 */

/* C Program to display Fibonacci series
 * In this tutorial, we will learn two following ways to display Fibonacci series in C programming language:
 * 1) Using For loop
 * 2) Using recursion
 * 
 * Program to display Fibonacci series using recursion
 * Here we are using a user defined function fibonacci_series() that calls itself recursively, in order to display series for the entered number of terms.
 */

#include <stdio.h>
int fibonacci_series(int);
int main()
{
    int count, c = 0, i;
    printf("Enter number of terms:");
    scanf("%d",&count);

    printf("\nFibonacci series:\n");
    for ( i = 1; i <= count ; i++ )
    {
        printf("%d\n", fibonacci_series(c));
        c++;
    }

    return 0;
}
int fibonacci_series(int num)
{
    if ( num == 0 )
    {
        return 0;
    }
    else if ( num == 1 )
    {
        return 1;
    }
    else
    {
        return (fibonacci_series(num-1) + fibonacci_series(num-2));
    }
}

