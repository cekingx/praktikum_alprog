#include <stdio.h>
#include <stdlib.h>

/*
 * Desimal ke Binary
 
       13/2 = 6 sisa 1 -----> 1 * 10^0 =    1
       6/2  = 3 sisa 0 -----> 0 * 10^1 =   00
       3/2  = 1 sisa 1 -----> 1 * 10^2 =  100
       1/2  = 0 sisa 1 -----> 1 * 10^3 = 1000
                                        ------ +
                                         1101 (2)


 * Binary ke Desimal
       1101/10 = 110 sisa 1 -----> 1 * 2^0 = 1
       110/10  = 11  sisa 0 -----> 0 * 2^1 = 0
       11/10   = 1   sisa 1 -----> 1 * 2^2 = 4
       1/10    = 0   sisa 1 -----> 1 * 2^3 = 8
                                            --- +
                                             13 (10)

*/

int DesToBin(int x);
int BinToDes(int x);

void menu();

int main(){
       menu();

       return 0;
}

void menu(){
       int menu; // pilih menu
       int des; // input desimal
       int bin; // input biner
       char ulang;

       do{
              system("cls");
              printf("1. Konversi Dari Desimal ke Biner \n");
              printf("2. Konversi dari Biner ke Desimal \n");
              printf("Pilih menu > "); scanf("%d", &menu);
              switch(menu){
                     case 1:{
                            printf("Masukkan bilangan desimal > "); scanf("%d", &des);
                            printf("Hasil konversi adalah %ld \n", DesToBin(des));
                            break;
                     }
                     case 2:{
                            printf("Masukkan bilangan biner > "); scanf("%ld", &bin);
                            printf("Hasil konversi adalah %d \n", BinToDes(bin));
                            break;
                     }
              }
              printf("Ingin mengulang konversi [y/t] > "); scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

int DesToBin(int x){
       int binary = 0;
       int sisa;
       int pangkat = 1;

       while(x > 0){
              sisa = x%2;
              x /= 2;
              binary = binary + (sisa*pangkat);
              pangkat *= 10;
       }

       return binary;
}

int BinToDes(int x){
       int binary = 0;
       int sisa;
       int pangkat = 1;

       while(x > 0){
              sisa = x%10;
              x /= 10;

              binary = binary + (sisa*pangkat);
              pangkat *= 2;
       }

       return binary;
}