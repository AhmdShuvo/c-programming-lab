#include <stdio.h>

int main() {
   int array[10] = {101, 111, 3, 4, 50, 69, 7, 8, 9, 0};
   int loop, largest, second;

   for(loop = 0; loop <10; loop++) {
      if( largest < array[loop] ) {
         second = largest;
         largest = array[loop];
      } else if( second < array[loop] ) {
         second =  array[loop];
      }
   }

   printf("Largest - %d  \n", largest);   

   return 0;
}