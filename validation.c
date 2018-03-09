#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int validasi(char* x);

int main(){
       char s[10];
       int testValid;

       printf("Masukkan data berupa angka > "); scanf("%s", &s);
       testValid = validasi(s);
       if(testValid == 1){
              printf("Data berupa angka \n");
       }
       else{
              printf("Data bukan angka\n");
       }

       return 0;
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