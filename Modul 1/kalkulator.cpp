#include <iostream>
using namespace std;

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);
int mod(float a, float b);


int main(){
    float x, y;

    cout << "Penjumlahan" << endl;
    cin >> x >> y;
    cout << mod(x,y);
    return 0;
}

float tambah(float a, float b){
    float c;

    c=a+b;
    return c;
}

float kurang(float a, float b){
    float c;

    c=a-b;
    return c;
}

float kali(float a, float b){
    float c;

    c=a*b;
    return c;
}

float bagi(float a, float b){
    float c;

    c=a/b;
    return c;
}

int mod(float a, float b){
    int c,x,y;
    x=(int)a;
    y=(int)b;

    c=x%y;
    return c;
}