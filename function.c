

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

// another example, function that return information:

int age(int number)//this function should be written first
{
  return number *2;
}

int main()
{
 printf("The cat is 3 years old. In two years cat's age will be %i years old", age(3));

  return 0;
}
