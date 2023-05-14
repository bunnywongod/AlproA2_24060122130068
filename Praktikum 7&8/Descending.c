/*
Nama Program  : Descending.c
Deskripsi     : Mengurutkan bilangan secara terurut dari terbesar ke terkecil
Nama Pembuat  : MOHAMAD FAISAL RIZKI
NIM           : 24060122130068
Tanggal       : 14 Mei 2023
*/
#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {

  //KAMUS LOKAL
  int i;
  int j;
  int temp;
  bool tukar;

  //ALGORITMA
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
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}

