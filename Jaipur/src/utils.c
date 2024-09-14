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
