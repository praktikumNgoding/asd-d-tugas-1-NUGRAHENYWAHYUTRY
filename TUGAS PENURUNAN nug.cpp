#include <iostream>
using namespace std;

typedef struct bil_polinom{
 int angka, pangkat;
 char x;
}
bil_polinom deklar_Pol1[5], deklar_Pol2[6], deklar_Pol3[2];
bil_polinom penambahan[8], pengalian[5*2], penurunan[5];
int i = 0, ik = 0, ikur = 0;

void Fungsi_Pol1(){

 deklar_Pol1[0].angka = 6;
 deklar_Pol1[0].x = 'x';
 deklar_Pol1[0].pangkat = 8;

 deklar_Pol1[1].angka = 8;
 deklar_Pol1[1].x = 'x';
 deklar_Pol1[1].pangkat = 7;

 deklar_Pol1[2].angka = 5;
 deklar_Pol1[2].x = 'x';
 deklar_Pol1[2].pangkat = 5;

 deklar_Pol1[3].angka = 1;
 deklar_Pol1[3].x = 'x';
 deklar_Pol1[3].pangkat = 3;

 deklar_Pol1[4].angka = 15;}

void Fungsi_Pol2(){

 deklar_Pol2[0].angka = 3;
 deklar_Pol2[0].x = 'x';
 deklar_Pol2[0].pangkat = 9;

 deklar_Pol2[1].angka = 4;
 deklar_Pol2[1].x = 'x';
 deklar_Pol2[1].pangkat = 7;

 deklar_Pol2[2].angka = 3;
 deklar_Pol2[2].x = 'x';
 deklar_Pol2[2].pangkat = 4;

 deklar_Pol2[3].angka = 2;
 deklar_Pol2[3].x = 'x';
 deklar_Pol2[3].pangkat = 3;

 deklar_Pol2[4].angka = 2;
 deklar_Pol2[4].x = 'x';
 deklar_Pol2[4].pangkat = 2;

 deklar_Pol2[5].angka = 10;}

void Fungsi_Pol3(){

 deklar_Pol3[0].angka = 1;
 deklar_Pol3[0].x = 'x';
 deklar_Pol3[0].pangkat = 2;

 deklar_Pol3[1].angka = 5;}
