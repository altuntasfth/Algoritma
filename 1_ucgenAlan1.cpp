#include<stdio.h>

int main(){
	float a,h,alan;
	
	printf("Kenar uzunlugu ve yukseklik giriniz (cm):");
	scanf("%f %f",&a,&h);
	
	alan = a*h/2;
	printf("Alan = %.2f",alan);
	
}
