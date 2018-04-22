#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX 1000
int arrAcak[MAX];
int arr[MAX];
int partition (int arr[], int low, int high);
void bubbleSort();
void insertionSort();
void swap(int* a, int* b);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);



int main () {
       int i, n;
       time_t t;
       clock_t start_t, end_t;
       double total_t;
   
       /* Intializes random number generator */
       srand((unsigned) time(&t));

       //assign random number to arrAcak[]
       for( i = 0 ; i < MAX ; i++ ) {
              arrAcak[i] = (rand() % 64000);
       }

       //assign arrAcak[] to arr[]
       for( i = 0; i < MAX ; i++){
              arr[i] = arrAcak[i];
       }
       
       for( i = 0 ; i < MAX ; i++ ) {
              printf("%d\t", arr[i]);
       }
       printf("\n\n");

       //bubbleSort()
       start_t = clock();

       bubbleSort();

       for( i = 0 ; i < MAX ; i++ ) {
              printf("%d\t", arr[i]);
       }
       printf("\n");

       end_t = clock();
       total_t = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;
       printf("\nTotal time taken by CPU: %.3f second\n", total_t  );

       //assign arrAcak[] to arr[]
       for( i = 0; i < MAX ; i++){
              arr[i] = arrAcak[i];
       }

       //insertionSort()
       start_t = clock();
       
       insertionSort();

       for( i = 0 ; i < MAX ; i++ ) {
              printf("%d\t", arr[i]);
       }
       printf("\n");

       end_t = clock();
       total_t = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;
       printf("\nTotal time taken by CPU: %.3f second\n", total_t  );

       //assign arrAcak[] to arr[]
       for( i = 0; i < MAX ; i++){
              arr[i] = arrAcak[i];
       }

       //quickSort()
       start_t = clock();
       
       int m = sizeof(arr)/sizeof(arr[0]);
       quickSort(arr, 0, m-1);

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

void insertionSort() {

       int valueToInsert;
       int holePosition;
       int i;
  
       // loop through all numbers 
       for(i = 1; i < MAX; i++) { 
	
              // select a value to be inserted. 
              valueToInsert = arr[i];
                     
              // select the hole position where number is to be inserted 
              holePosition = i;
                     
              // check if previous no. is larger than value to be inserted 
              while (holePosition > 0 && arr[holePosition-1] > valueToInsert) {
                     arr[holePosition] = arr[holePosition-1];
                     holePosition--;
              }

              if(holePosition != i) {
                     // insert the number at hole position 
                     arr[holePosition] = valueToInsert;
              }	
       }  
}

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}