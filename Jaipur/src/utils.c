#include "utils.h"

void randomize_index_array(int arr[], int size) {
  for (int i = size - 1; i > 0; i--) {
    int j = rand() % (i + 1);
    // Swap array[i] with array[j]
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
  }
}

void print_array_goods(char* name, int* array, int size, int cutoff) {
  printf("Remaining %s tokens: ", name);
  for (int i = 0; i < size; i++) {
    if (i < cutoff) {
      printf(" * ");  // Three spaces
    } else {
      printf(" %i ", array[i]);
    }
  }
  printf("\n");
}
