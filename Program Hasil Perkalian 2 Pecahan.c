#include<stdio.h>
int main (void)
{
    float a;
    float b;
    float c;
    printf("Masukkan Nilai Pecahan A : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Pecahan B : ");
    scanf("%f", &b);
    c=a*b;
    printf("Hasil Perkalian Pecahan A dan B adalah %.2f", c);
    return 0;
}
