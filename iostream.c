#include <iostream>

int main()
{
char characterName[] = "Mikan";// store a bunch of characters
int age = 3;

printf("My name is %s and I'm %d years old\n", characterName, age); //printf is a function

age = 4;
printf("I'm %d years old", age);

return 0;
}
/*
%s -> string of letters
%d -> decimal integer
%i -> integer
%f -> floating point number

%d assume base 10 while %i auto detects the base
*/
