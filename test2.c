#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX 64000
int arr[MAX];
void sequential_search(int n);
void binary_search(int n);
void bubbleSort();


int main () {
   int i, n;
   time_t t;
   clock_t start_t1, end_t1, start_t2, end_t2;
   double total_t;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   
   for( i = 0 ; i < MAX ; i++ ) {
      arr[i] = (rand() % 64000);
   }

   for( i = 0 ; i < MAX ; i++ ) {
      printf("%d\t", arr[i]);
   }
   printf("\n\n");

   bubbleSort();


       printf("Enter value to find\n");
       scanf("%d", &n);
       printf("Sequential search\n");
       start_t1 = clock();
       sequential_search(n);
       end_t1 = clock();
       total_t = ((double)(end_t1 - start_t1)) * 1000 / CLOCKS_PER_SEC;
       printf("\nTotal time taken by CPU: %.3f milisecond\n", total_t  );
       start_t2 = clock();
       printf("Binary search\n");
       binary_search(n);
       end_t2 = clock();
       total_t = ((double)(end_t2 - start_t2)) * 1000 / CLOCKS_PER_SEC;
       printf("\nTotal time taken by CPU: %.3f milisecond\n", total_t  );

   
   
   
   return 0;
}

void sequential_search(int n)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] == n)
        {
            printf("%d found at location %d.\n", n, i+1);
            break;
        }
    }
    if (i == MAX)
        printf("Not found! %d is not present in the list.\n", n);
}
/*  End of sequential_search()  */
 
/*  Function for binary search  */
void binary_search(int n)
{
    int i, first, last, middle;
    first = 0;
    last = MAX - 1;
    middle = (first+last) / 2;
 
    while (first <= last) {
        if (arr[middle] < n)
            first = middle + 1;
        else if (arr[middle] == n) {
            printf("%d found at location %d.\n", n, middle+1);
           break;
        }
        else
            last = middle - 1;
 
        middle = (first + last) / 2;
    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", n);
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