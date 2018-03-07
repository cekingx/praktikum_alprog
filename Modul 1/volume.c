#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


//Volume Bangun Ruang
void HitungVolumeBalok(float p, float l, float t);
/*
 p = panjang
 l = lebar
 t = tinggi
*/

void HitungVolumeBola(float r);
/*
 r = jari-jari
*/

void HitungVolumeLimas(float s, float t);
/*
 Limas segitiga sama sisi
 s = sisi alas segitiga
 t = tinggi
*/

void HitungVolumePrisma(float s, float t);
/*
 Prisma segitiga sama sisi
 s = sisi segitiga
 t = tinggi
*/

void HitungVolumeTabung(float r, float t);
/*
 r = jari-jari
 t = tinggi
*/


//Luas Permukaan Bangun Ruang

void HitungLuasBalok(float p, float l, float t);
/*
 p = panjang
 l = lebar
 t = tinggi
*/

void HitungLuasBola(float r);
/*
 r = jari=jari
*/

void HitungLuasLimas(float s, float ls);
/*
 Limas Segitiga Sama Sisi
 s  = sisi alas
 ls = luas sisi
*/

void HitungLuasPrisma(float s, float t);
/*
 s = sisi segitiga
 t = tinggi
*/

void HitungLuasTabung(float r, float t);
/*
 r = jari-jari
 t = tinggi
*/

void menu();


int main(){

       menu();
       return 0;
}

void menu(){
       float p, l, t, s, ls, r;
       int pilihan;
       char ulang;
       
       do{
              system("cls");
              printf("\n\n\t\t  MENU");
              printf("\n\n\tMenghitung Volume dan Luas Permukaan");
              printf("\n\n\t1. Balok");
              printf("\n\t2. Bola");
              printf("\n\t3. Limas segitiga sama sisi");
              printf("\n\t4. Prisma segitiga sama sisi");
              printf("\n\t5. Tabung");
              printf("\n\n\tMasukkan pilihan anda : ");
              scanf("%d", &pilihan);
              
              switch(pilihan){
                     case 1:{
                            printf("\n\tMasukkan panjang  : "); scanf("%f", &p);
                            printf("\tMasukkan lebar    : "); scanf("%f", &l);
                            printf("\tMasukkan tinggi   : "); scanf("%f", &t);
                            HitungVolumeBalok(p, l, t);
                            HitungLuasBalok(p, l, t);
                            break;
                     }
                     case 2:{
                            printf("\n\tMasukkan jari-jari  : "); scanf("%f", &r);
                            HitungVolumeBola(r);
                            HitungLuasBola(r);
                            break;
                     }
                     case 3:{
                            printf("\n\tMasukkan sisi alas       : "); scanf("%f", &s);
                            printf("\tMasukkan luas sisi limas : "); scanf("%f", &ls);
                            printf("\tMasukkan tinggi          : "); scanf("%f", &t);
                            HitungVolumeLimas(s, t);
                            HitungLuasLimas(s, ls);
                            break;
                     }
                     case 4:{
                            printf("\n\tMasukkan sisi alas  : "); scanf("%f", &s);
                            printf("\tMasukkan tinggi     : "); scanf("%f", &t);
                            HitungVolumePrisma(s, t);
                            HitungLuasPrisma(s, t);
                            break;
                     }
                     case 5:{
                            printf("\n\tMasukkan jari-jari  : "); scanf("%f", &r);
                            printf("\tMasukkan tinggi     : "); scanf("%f", &t);
                            HitungVolumeTabung(r, t);
                            HitungLuasTabung(r, t);
                            break;
                     }
              }
              printf("\n\n\tUlangi (y/t)? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

void HitungVolumeBalok(float p, float l, float t){
       float volume;

       volume = p*l*t;
       printf("Volume balok adalah : %.2f \n", volume);
}

void HitungLuasBalok(float p, float l, float t){
       float lp;

       lp = 2*(p*l) + 2*(l*t) + 2*(p*t);
       printf("Luas permukaan balok adalah : %.2f \n", lp);
}

void HitungVolumeBola(float r){
       float volume;

       volume = (4/3)*PI*r*r*r;
       printf("Volume bola adalah : %.2f \n", volume);
}

void HitungLuasBola(float r){
       float lp;

       lp = 4*PI*r*r;
       printf("Luas permukaan bola adalah : %.2f \n", lp);
}

void HitungVolumeLimas(float s, float t){
       float volume, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       volume = (1/3)*la*t;
       printf("Volume limas adalah : %.2f \n", volume);
}

void HitungLuasLimas(float s, float ls){
       float lp, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       lp = la + (3*ls);
       printf("Luas permukaan limas adalah : %.2f \n", lp);       
}

void HitungVolumePrisma(float s, float t){
       float volume, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       volume = la*t;
       printf("Volume prisma adalah : %.2f \n", volume);
}

void HitungLuasPrisma(float s, float t){
       float lp, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       lp = (3*s*t) + (2*la);
       printf("Luas permukaan prisma adalah : %.2f \n", lp);
}

void HitungVolumeTabung(float r, float t){
       float la, volume;

       la = PI*r*r;
       volume = la*t;
       printf("Volume tabung adalah : %.2f \n", volume);
}

void HitungLuasTabung(float r, float t){
       float kll, la, lp;

       la = PI*r*r;
       kll = PI*2*r;
       lp = (2*la) + (kll*t);
       printf("Luas permukaan tabung adalah : %.2f \n", lp);
}
