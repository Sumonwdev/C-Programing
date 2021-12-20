/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 */

/* 
 * C Programming examples with Output.
 * C Program to find factorial of number using Recursion
 * This Program prompts user for entering any integer number, finds the factorial of input number and displays the output on screen. We will use a recursive user defined function to perform the task. Here we have a function find_factorial that calls itself in a recursive manner to find out the factorial of input number. We have involved the user interaction in the below program, however if you do not want that part then you can simply assign an integer value to variable num and ignore the scanf statement. In short you can tweak it in any way you want, the logic would be the same for each case.
 * 
 * Program to find factorial
 */
// cp_findFactorialNumberusingRecursion.c
#include<stdio.h>
int find_factorial(int);
int main()
{
   int num, fact;
   //Ask user for the input and store it in num
   printf("\nEnter any integer number:");
   scanf("%d",&num);
 
   //Calling our user defined function
   fact =find_factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int find_factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
 
   //Function calling itself: recursion
   return(n*find_factorial(n-1));
}
