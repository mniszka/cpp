/* Let's say we have a culture of bacteria. 
After every hour one bacterium divide into two bacteria.
How many hours will pass until we'll have 1 000 000 000 bacteria? 
We can use a for/ while/ do ... while loop*/


//FOR LOOP:

  int year=1;
  int bact = 2; //number of bacteria
  for(year, bact; bact<=1000000000;year++, bact*=2) { }
  cout<<year; //answer: 30
  
// WHILE LOOP:
  int year=1;
  int bact = 2; //number of bacteria
  while(bact<=1000000000)
  {
    year++, bact*=2;
  }
  cout<<year; //answer: 30
  
// Do ... WHILE LOOP:
   int year=1;
  int bact = 2; //number of bacteria

  do
   {
    year++;
    bact*=2;
    }
  while(bact<=1000000000);
 
  cout<<year; //answer: 30



