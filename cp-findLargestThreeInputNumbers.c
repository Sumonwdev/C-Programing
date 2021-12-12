/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 * -------------------------------------
 * C Program to find greatest of three numbers
 * Program to find largest of three input numbers
 * The program will prompt user to input three integer numbers and based on the input, it would compare and display the greatest number as output. In this program num1, num2 & num3 are three int variables that represents number1, number2 and number3 consecutively.
 */

#include <stdio.h>
int main()
{
    int num1,num2,num3;

    //Ask user to input any three integer number
    printf ("\nEnter value of num1, num2 and num3:");
    //Stor input value in variables for comparsion
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if ((num1>num2)&&(num1>num3))
    {
        printf("\n Number1 is gratest\n");
    }
    else if ((num2>num3)&&(num2>num1))
    {
        printf("\n Number2 is gratest\n");
    }
    else
    {
        printf("\n Number3 is gratest\n");
    }
    return 0;

    /* Output: 
     * Enter value of num1, num2 and num3: 15 200 101
     * Number2 is greatest
     */
}