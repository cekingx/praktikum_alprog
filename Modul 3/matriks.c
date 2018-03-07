#include <stdio.h>
#include <stdlib.h>

/*
 * perkalian dengan konstanta
 * perkalian dengan matriks
 * penjumlahan dengan matriks
 * transpose
 * 
 * Program ini maksimal menampung matriks dengan ordo 10x10
 */

void PerkalianKonstan();
void PerkailanMatriks();
void PenjumlahanMatriks();
void Transpose();
void menu();

int main(){
       PenjumlahanMatriks();

       return 0;
}

void menu(){

}

void PerkalianKonstan(){
       //1. input matriks
       //2. input pengali
       //3. output hasil
}

void PerkailanMatriks(){
       //1. input matriks
       //2. input matriks pengali
       //3. output hasil
}

void PenjumlahanMatriks(){
       int matriks1[10][10], matriks2[10][10];
       int i, j; // counter for loop 
       int m, n; // ordo matriks 

       //1. input matriks
       printf("Masukkan ordo matriks pertama \n");
       scanf("%d %d", &m, &n);

       printf("Masukkan elemen matriks1 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks1[i][j]);
              }
       }

       printf("Masukkan elemen matriks2 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks2[i][j]);
              }
       }

       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     matriks1[i][j] += matriks2[i][j];
              }
       }

       printf("Hasil penjumlahan matriks ordo %d x %d \n", m, n);
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %3d", matriks1[i][j]);
              }
              printf("\n");
       }
       
              
}

void Transpose(){
       int matriks[10][10];
       int i, j; // counter for loop 
       int m, n; // ordo matriks

       //1. input matriks
       printf("Masukkan ordo matriks \n");
       scanf("%d %d", &m, &n);
       printf("Masukkan elemen matriks \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks[i][j]);
              }
       }
       /*
       printf("The given matrix is \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %d", matriks[i][j]);
              }
              printf("\n");
       }
       */
       //2. output hasil
       printf("Transpose matriks \n");
       for (j = 0; j < n; j++){
              for (i = 0; i < m; i++){
                     printf(" %d", matriks[i][j]);
              }
              printf("\n");
       }
}
