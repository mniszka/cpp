//a vector concept is in a separate folder

#include <iostream>
using namespace std;

int main(){

int arr[3]= {1,2,3};
cout<<*arr; // = tab[0] = 1
cout<<*(arr+2); //=tab[2] = 3
  
 //size in bytes
 cout<< sizeof(arr);
   
 //number of elements
  cout<<sizeof(arr)/sizeof(arr[0]);

}
