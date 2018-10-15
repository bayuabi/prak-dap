#include <stdio.h>
#include <stdlib.h>

int jari;
const float phi = 3.14159265359;
typedef float flut;
flut luas;
flut keliling;

int main(){
  printf("===PROGRAM MENGHITUNG LUAS DAN KELILING LINGKARAN===\n");
  printf("Masukkan nilai jari2: ");
  scanf("%d",&jari);
  luas = phi*jari*jari;
  keliling = phi*2*jari;
  printf("Luas = %.3f\n",luas);
  printf("Keliling = %.3f\n",keliling);
}
