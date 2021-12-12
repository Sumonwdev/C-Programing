/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 */

/* C Program to reverse a given number using Recursive function
 * In this tutorial, we will learn following two methods of reversing a number.
 * 1) Using Recursion
 * 2) Using While loop
 */
// Reversing a number using While loop
// In the above program we learnt how to reverse a number using recursive function. Here we would learn how to do it using while loop.

#include <stdio.h>
int main()
{
    int num,rem,reverse_num=0;
    //input number
    printf("\nEnter any nimber:");
    scanf("%d",&num);

    while (num>=1)
    {
        rem = num % 10;
        reverse_num = reverse_num * 10 + rem;
        num = num / 10;
    }
    
    printf("\nReverse of input number is: %d\n", reverse_num);
    return 0;

    /* Output:
     * Enter any number: 49212
     * Reverse of input number is: 21294
     */
}