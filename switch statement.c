

#include <stdio.h>
#include <stdlib.h>


int main()
{
  char grade = 'A'; //single quote
  switch (grade){
    case 'A':
    printf("Very good grade");
    break;
    case 'B':
    printf("Good grade");
    break;
    default:
    printf("Invalid grade");
    
  }
  
  return 0;
}
