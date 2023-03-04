/*
Nama Program  : Kasus1
Deskripsi     : Menunjukan nilai bilangan bulat
Nama Pembuat  : MOHAMAD FAISAL RIZKI
NIM           : 24060122130068
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int i;

    //ALGORITMA

    printf("Masukkan nilai i: ");

    if (scanf("%d", &i)){
        if (i > 0 ){
            printf("Bilangan bulat positif");
        }else if ( i == 0){
            printf("Bilangan nol");
        }else{
            printf("Bilangan bulat negatif");
        }
    }else{
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;
}
