#include <stdio.h>
int addition(int num1, int num2)
{
    int sum;
    /* Arguments are used here*/
    sum = num1+num2;
    /* function return type is intiger so we are returning
     * an intiger value, the sum of the passed number.
     */
    return sum;
}
int done()
{
    printf("Ok Done\n");
}
int main()
{
    int var1, var2;
    printf("Enter number 1: ");
    scanf("%d", &var1);
    printf("Enter number 2: ");
    scanf("%d", &var2);
    
    /*
    *
    */
   int res = addition(var1, var2);
   printf("Output: %d\n", res);
   done();
   return 0;
} 
