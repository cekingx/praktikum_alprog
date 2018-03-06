#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define phi 3.14 //nilai phi

float LuasPersegiPanjang(float a, float b); // a = panjang, b = lebar
float LuasSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float LuasLingkaran(float r); // r = jari-jari
float LuasTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float LuasJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi

float KllPersegiPanjang(float a, float b); // a = sisi datar, b = sisi tegak
float KllSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float KllLingkaran(float r); // r = jari-jari
float KllTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float KllJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi

void menu();

int main() {
       menu();
       return 0;
}

void menu(){
       float r, x, y, z;
       int pilihan;
       char ulang;
       
       do{
              system("cls");
              printf("\n\n\t\t  MENU");
              printf("\n\n\tMenghitung Luas dan Keliling");
              printf("\n\n\t1. Persegi Panjang");
              printf("\n\t2. Segitiga Sembarang");
              printf("\n\t3. Lingkaran");
              printf("\n\t4. Trapesium");
              printf("\n\t5. Jajargenjang");
              printf("\n\n\tMasukkan pilihan anda : ");
              scanf("%d", &pilihan);
              system("cls");
              
              switch(pilihan){
                     case 1:{
                            printf("\n\tMasukkan panjang  : ");
                            scanf("%f", &x);
                            printf("\tMasukkan lebar   : ");
                            scanf("%f", &y);
                            printf("\n\tLuas persegi panjang  : %.2f", LuasPersegiPanjang(x, y));
                            printf("\n\tKeliling persegi panjang : %.2f", KllPersegiPanjang(x, y));
                            break;
                     }
                     case 2:{
                            printf("\n\tMasukkan sisi A : ");
                            scanf("%f", &x);
                            printf("\tMasukkan sisi B : ");
                            scanf("%f", &y);
                            printf("\tMasukkan sisi C : ");
                            scanf("%f", &z);
                            printf("\n\tLuas segitiga sembarang  : %.2f", LuasSegitigaSembarang(x, y, z));
                            printf("\n\tKeliling Segitiga Sembarang : %.2f", KllSegitigaSembarang(x, y, z));
                            break;
                     }
                     case 3:{
                            printf("\n\tMasukkan jari-jari : ");
                            scanf("%f", &r);
                            printf("\n\tLuas lingkaran  : %.2f", LuasLingkaran(r));
                            printf("\n\tKeliling lingkaran : %.2f", KllLingkaran(r));
                            break;
                     }
                     case 4:{
                            printf("\n\tMasukkan sisi atas : ");
                            scanf("%f", &x);
                            printf("\tMasukkan sisi bawah : ");
                            scanf("%f", &y);
                            printf("\tMasukkan tinggi  : ");
                            scanf("%f", &z);
                            printf("\n\tLuas trapesium  : %.2f", LuasTrapesium(x,y,z));
                            printf("\n\tKeliling trapesium : %.2f", KllTrapesium(x,y,z));
                            break;
                     }
                     case 5:{
                            printf("\n\tMasukkan alas  : ");
                            scanf("%f", &x);
                            printf("\tMasukkan sisi miring : ");
                            scanf("%f", &y);
                            printf("\tMasukkan tinggi  : ");
                            scanf("%f", &z);
                            printf("\n\tLuas jajargenjang : %.2f", LuasJajargenjang(x,y,z));
                            printf("\n\tKeliling jajargenjang : %.2f", KllJajargenjang(x,y,z));
                            break;
                     }
              }
              printf("\n\n\tUlangi (y/t)? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

float LuasPersegiPanjang(float a, float b){ // a = panjang, b = lebar
       return(a*b); // (a*b) adalah rumus luas persegi panjang
}

float KllPersegiPanjang(float a, float b){ // a = sisi datar, b = sisi tegak
       return(2*(a+b)); //(2*(a+b)) adalah rumus kll persegi panjang
}

float LuasSegitigaSembarang(float a, float b, float c){ // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
 float l, s;
       /*
       l = luas
       s = 0.5 * keliling
       */
       
       s = 0.5 * (a+b+c);
       l = sqrt(s*(s-a)*(s-b)*(s-c));
        return l;
}

float KllSegitigaSembarang(float a, float b, float c){ // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
       return(a+b+c);
}

float LuasLingkaran(float r){ // r = jari-jari
       return(phi*r*r);
}

float KllLingkaran(float r){ // r = jari-jari
       return(2*phi*r);
}

float LuasTrapesium(float a, float b, float t){ // a = sisi atas, b = sisi bawah, t = tinggi trapesium
       return((a+b)*t / 2);
}

float KllTrapesium(float a, float b, float t){ // a = sisi atas, b = sisi bawah, t = tinggi trapesium
       float k; //keliling
       float x,z;

       /*
                a
           ___________
          /|          \
       z / |t          \
        /__|____________\
         x   
                b

       */

       x = (b - a)/2;
       z = sqrt(x*x + t*t); //mencari nilai sisi miring
       k = a + b + ( 2*z );
    
       return k;
}
float LuasJajargenjang(float a, float b, float t){ // a = alas, b = sisi miring, t = tinggi
       return(a*t);
}

float KllJajargenjang(float a, float b, float t){
        /*
          _____________
         /############/   |
        /############/ b  | t
       /____________/   __|
              a
       
       */
       
       return(2*(a+b));
}