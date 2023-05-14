#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {

  //KAMUS LOKAL
  int i,j;
  int temp;
  bool tukar;

  //algoritma

  tukar = true;
  i=0;
  while (i < n  && tukar) {
    tukar = false;
    for(j=0; j<n; j++) {
      if (arr[j] < arr[j + 1]) {

        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        tukar = true;
      }

    }
    i++;
  }
}

int main() {

    //KAMUS LOKAL
    int arr[] ={3, 10, 2, 20, 45, 7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    //ALGORITMA
    bubbleSort(arr, n);
    printf("Array yang sudah terurut: \n");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}

