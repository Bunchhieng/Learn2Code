#include <stdio.h>

/**
 * This is main function
 */
int main(int argc, char *argv[])
{
   /* We initialize integer width with value 300
    * and height with value 100
    */
   int width = 300;
   int  height = 100;

   int parameter;
   int area;

   // Display parameter and area of the rectangle
   // \n is an escape sequence for new line
   printf("The parameter of the rectangle is %d. \n", (width+height)*2);
   printf("The area of the rectangle is %d. \n", width*height);
   // A return from the main function
   // 0 is false, others is true
   return 0;
}
