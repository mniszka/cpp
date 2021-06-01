// pointer is a type of data, it is a memory address

// * astrix
// & ampersand

int number = 3;

///gives pointer variable a name:
int *pNumber =  &number;// put "p" before a name

//getting an address of a variable
printf("%p", pNumber ); //0xF958798572

printf("%d", *pNumber); // 3

//dereferencing pointers:
printf("%d", *&number); //3

printf("%p", &*&number); //0xF958798572

/*

%p --> pointer
%d --> decimal number

*/
