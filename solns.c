/* Enter your solutions in this file */
#include <stdio.h>
/* max function*/
int max(int arr[], int len){
  int maximum = arr[0];
  for(int i= 0; i< len; i++){
    if(arr[i]> maximum)
      maximum = arr[i];
  }
  return maximum;
       }
