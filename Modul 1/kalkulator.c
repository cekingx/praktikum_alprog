#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);
int mod(float a, float b);
int validasi(); // validasi input dari user
float konversi(); // konversi dari string ke float 

void menu();

int main(){
       menu();
       return 0;
}

void menu(){
       char input1[10], input2[10];
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
              
              printf("\n\tMasukkan bilangan pertama : "); scanf("%s", &input1);
              if(validasi(input1) == 1){
                     x = konversi(input1);
              }
              else{
                     printf("Inputan anda mengandung karakter yang tidak valid \n");
                     goto loop; // goto statement
              }

              printf("\tMasukkan bilangan kedua  : "); scanf("%s", &input2);
              if(validasi(input2) == 1){
                     y = konversi(input2);
              }
              else{
                     printf("Inputan anda mengandung karakter yang tidak valid \n");
                     goto loop; // goto statement
              }
              
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
              loop: // goto statement
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

int validasi(char* x){
       int len = strlen(x);
       int valid = 1;

       for(int i = 0; i<len; i++){
              if(x[i] == '.'){
                     continue;
              }
              
              if(!isdigit(x[i])){
                     valid = 0;
                     break;
              }
       }

       return valid;
}

float konversi(char* x){
       float y;

       y = atof(x);

       return y;
}