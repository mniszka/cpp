//2-dimensional arrays- alle elements in the array are arrays themeselves



#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[3][2]= { {1,2}, {3,4}, {5,6}};
 //printf("%d", arr[0][0]);

int i, j;
 for(i=0; i<3; i++){
   for(j=0; j<2; j++){
     printf("%d", arr[i][j]);//123456
   }
 }
}













