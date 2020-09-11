#include "roman_numerals.h"
#include <stdlib.h>

char *to_roman_numeral(unsigned int number)
{
   char *array = calloc(16, sizeof(char));
   int i = 0;

   while(number != 0)
   {
      if(number >= 1000)
      {
         array[i++] = 'M';
         number -= 1000;
      }
      else if(number >= 900)
      {
         array[i++] = 'C';
         array[i++] = 'M';
         number -= 900;
      }
      else if(number >= 500)
      {
         array[i++] = 'D';
         number -= 500;
      }
      else if(number >= 400)
      {
         array[i++] = 'C';
         array[i++] = 'D';
         number -= 400;
      }
      else if(number >= 100)
      {
         array[i++] = 'C';
         number -= 100;
      }
      else if(number >= 90)
      {
         array[i++] = 'X';
         array[i++] = 'C';
         number -= 90;
      }

      else if(number >= 50)
      {
         array[i++] = 'L';
         number -= 50;
      }

      else if(number >= 40)
      {
         array[i++] = 'X';
         array[i++] = 'L';
         number -= 40;
      }
      else if(number >= 10)
      {
         array[i++] = 'X';
         number -= 10;
      }
      else if(number >= 9)
      {
         array[i++] = 'I';
         array[i++] = 'X';
         number -= 9;
      }
      else if(number >= 5)
      {
         array[i++] = 'V';
         number -= 5;
      }
      else if(number >= 4)
      {
         array[i++] = 'I';
         array[i++] = 'V';
         number -= 4;
      }
      else if(number >= 1)
      {
         array[i++] = 'I';
         number -= 1;
      }
   }
   return array;
}
