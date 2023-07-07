#include <stdio.h>

void bubbleSort(int arr[], int n)
{

   // Defining my variables I need 
   int i, j, temp, swaps;
   swaps = 0;
   // first forloop to traverse the array
   for (i = 0; i < n; ++i)
   {
       // nested forloop to loop through the indexes and check + swap the index if it is greater
       // than the index that is right after it.
       for (j = 0; j < n-i; ++j)
       {
            // checking if first index is greater than the following index
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swaps++;
           }
       }
    // printing out the number of swaps for each index needed
    printf("Number of swaps needed for index %d: %d\n", i, swaps);
    // initializing swaps back to 0 to reset
    swaps = 0;
   }
}

int main()
{
   int arr[] = {97,16,45,63,13,22,7,58,72};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   return 0;
}