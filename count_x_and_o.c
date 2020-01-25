#include <stdbool.h>

bool xo (const char* str)
{
  int count_o = 0;
  int count_x = 0;
  int i = 0; 
  while(*(str+i) != '\0')
  {
  if(*(str+i) == 'x' || *(str+i) == 'X')
    count_x++;
  if(*(str+i) == 'o' || *(str+i) == 'O')
    count_o++;
  i++;  
  }
  if(count_x == count_o)
    return true;
  return false;
}
