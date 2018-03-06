#include <stdio.h>
#include <stdlib.h>

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);
int mod(float a, float b);
void menu();

int main(){
       menu();
       return 0;
}

void menu(){
       float x, y;
       int pilihan;
       char ulang;
 
       do{
              system("cls");
              printf("\n\t\tMENU\n");
              printf("\n\t1. Penjumlahan");
              printf("\n\t2. Pengurangan");
              printf("\n\t3. Perkalian");
              printf("\n\t4. Pembagian");
              printf("\n\t5. Sisa hasil bagi");
              printf("\n\n\tMasukkan pilihan anda : ");
              scanf("%d", &pilihan);
              system("cls");
              
              printf("\n\tMasukkan bilangan pertama : ");
              scanf("%f", &x);
              printf("\tMasukkan bilangan kedua  : ");
              scanf("%f", &y);
              
              switch(pilihan){
                     case 1:{
                            printf("\tHasil penjumlahan  : %.2f", tambah(x, y));
                            break;
                     }
                     case 2:{
                            printf("\tHasil pengurangan  : %.2f", kurang(x, y));
                            break;
                     }
                     case 3:{
                            printf("\tHasil perkalian   : %.2f", kali(x, y));
                            break;
                     }
                     case 4:{
                            printf("\tHasil pembagian   : %.2f", bagi(x, y));
                            break;
                     }
                     case 5:{
                            printf("\tSisa hasil bagi   : %d", mod(x, y));
                            break;
                     }
              }
              printf("\n\n\tUlangi (y/t) ? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

float tambah(float a, float b){
       return(a+b); //penjumlahan
}

float kurang(float a, float b){
       return(a-b); //pengurangan
}

float kali(float a, float b){
       return(a*b); //perkalian
}

float bagi(float a, float b){
       return(a/b); //pembagian
}

int mod(float a, float b){
       int x, y; //sisa hasil bagi
 
       x = (int) a;
       y = (int) b; //type casting
 
       return(x%y);
}

