#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX 64000
int arr[MAX];
void bubbleSort();

int main () {
   int i, n;
   time_t t;
   clock_t start_t, end_t;
   double total_t;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   start_t = clock();
   for( i = 0 ; i < MAX ; i++ ) {
      arr[i] = (rand() % 64000);
   }

   for( i = 0 ; i < MAX ; i++ ) {
      printf("%d\t", arr[i]);
   }
   printf("\n\n");

   bubbleSort();

   for( i = 0 ; i < MAX ; i++ ) {
      printf("%d\t", arr[i]);
   }
   printf("\n");

   end_t = clock();
   total_t = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;
   printf("\nTotal time taken by CPU: %.3f second\n", total_t  );
   
   return 0;
}

void bubbleSort() {
   int temp;
   int i,j;
	
   bool swapped = false;
   
   // loop through all numbers 
   for(i = 0; i < MAX-1; i++) { 
      swapped = false;
		
      // loop through numbers falling ahead 
      for(j = 0; j < MAX-1-i; j++) {

         // check if next number is lesser than current no
         //   swap the numbers. 
         //  (Bubble up the highest number)
			
         if(arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = true;
         }
      }
      // if no number was swapped that means 
      //   array is sorted now, break the loop. 
      if(!swapped) {
         break;
      }

   }
	
}