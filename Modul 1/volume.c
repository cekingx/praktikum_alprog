#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14; // Nilai Phi


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
       float x,y,z;
       scanf("%f %f %f", &x, &y, &z);
       HitungVolumeBalok(x,y,z);
       HitungLuasBalok(x,y,z);
}

void HitungVolumeBalok(float p, float l, float t){
       float v;

       v = p*l*t;
       printf("Volume balok adalah : %.2f \n", v);
}

void HitungLuasBalok(float p, float l, float t){
       float ls;

       ls = 2*(p*l) + 2*(l*t) + 2*(p*t);
       printf("Luas permukaan balok adalah : %.2f \n", ls);
}

void HitungVolumeBola(float r){
       float v;

       v = (4/3)*PI*r*r*r;
       printf("Volume bola adalah : %.2f", v);
}

void HitungLuasBola(float r){

}

void HitungVolumeLimas(float s, float t){

}

void HitungLuasLimas(float s, float ls){

}

void HitungVolumePrisma(float s, float t){

}

void HitungLuasPrisma(float s, float t){

}

void HitungVolumeTabung(float r, float t){

}

void HitungLuasTabung(float r, float t){

}

