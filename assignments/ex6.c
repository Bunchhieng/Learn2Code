/**
 * We take an integers from user inputs than evaluate
 * whether this number is odd or even
 */

#include <stdio.h>
/**
 * This program determine if a number is odd or even
 * by using decision making (if statement)
 */
int main(int argc, char *argv[])
{
   // Declaration of an integer
   int number;

   // Inform user to input a number
   printf("Please enter an integer: ");

   // Take an integer from user input
   scanf("%d", &number);

   // Determine if number if odd or even
   if (number % 2 == 0) {
      printf("%d is even number.\n", number);
   } else {
      printf("%d is odd number.\n", number);
   }

   return 0;
}
