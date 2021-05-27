
/*
variable is a container for a single value
array is a container for any number of values

a vector concept  in C++ is in a separate folder
*/

int arr[]= {1,2,3}; //[]square brackets and {}curly brackets
printf ("%d", arr[0]); //0 is an index of the element that we want to access
arr[0] = 7; 
printf("%d", arr[0]);

//another way:
int arr[2];//the capacity of the array is 2 elements
arr[0]= 1;
arr[1] = 2;
printf("%d", arr[0]);
