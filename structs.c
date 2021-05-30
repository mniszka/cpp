

#include <stdio.h>
#include <stdlib.h>

//create the basic template:
struct Cat{ 
  char name[10]; //it holds 10 characters maximum
  int age;
  double bmi;
};


int main()
{
 struct Cat cat1;
 cat1.age = 3;
 strcpy(cat1.name, "Mikan");//function to copy strings

 struct Cat cat2;
 cat2.age;
 strcpy(cat2.name, "Fela");

 printf("%s",cat2.name);
}











