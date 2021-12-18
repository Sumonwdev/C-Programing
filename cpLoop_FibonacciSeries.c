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
 * Fibonacci Series in C using loop
 * A simple for loop to display the series. Program prompts user for the number of terms and displays the series having the same number of terms.
 */

#include <stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;
    
    //ask user to input number of terms
    printf("Enter the number of tearm:\n");
    scanf("%d",&count);
    
    printf("First %d terms of Fibonacci series:\n",count);
    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
        {
            next_term = i;
        }
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        printf("%d\n",next_term);
    }

    return 0;
}