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
// Reverse a given number using Recursion
// In this program, we are calling a user defined function “reverse_function”, the function is calling itself recursively.

#include <stdio.h>
int main(){
    int num, reverse_number;
    // useer would input the number
    printf("\nEnter any number:");
    scanf("%d",&num);

    //Calling user difine function to perform reverse
    reverse_number=reverse_function(num);
    printf("\nAfter reverse the no is :%d\n",reverse_number);
    return 0;
}
int sum=0,rem;
reverse_function(int num){
    if (num)
    {
        rem-num%10;
        sum=sum*10+rem;
        reverse_function(num/10);
    }
    else
    {
        return sum;
    }
}