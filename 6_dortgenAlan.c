#include<stdio.h>
#include<math.h>

int main(){
	float a,b,aci,radyan,alan;
	float pi=3.14;
	
	printf("Iki adet kosegen uzunlugu giriniz (cm) :");
	scanf("%f%f",&a,&b);
	
	printf("Kosegenler arasindaki aciyi giriniz (derece) :");
	scanf("%f",&aci);
	
	radyan = aci/180*pi;
	
	alan = a*b*sin(radyan)/2;
	printf("Alan = %.2f",alan);
}
