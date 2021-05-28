#include <stdio.h>
#include <stdlib.h>

int main()
{
  cat("Mikan", 3); //call another function
  cat("Amik", 5);
  return 0;
}

void cat(char name[], int age) //the void function isn't going to return information
{
  printf("Hi, my name is %s and I'm %d years old\n", name, age );

}
