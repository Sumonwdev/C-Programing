/* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 */
// C Program to check whether the given integer is positive or negative

#include <stdio.h>

void main()
{
    int num;

    printf("Enter a umber: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number \n", num);
        else if (num < 0)
            printf("%d is a nagetive number \n", num);
        else
            printf("0 is nither positive number nor negetive\n");

/* Output 1:
Enter a number:
0
0 is neither positive nor negative

Output 2:
Enter a number:
-3
-3 is a negative number

Output 3:
Enter a number:
100
100 is a positive number
*/   
}