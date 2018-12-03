#include<stdio.h>
#include<math.h>

int main(){
	float a,b,aci,alan,radyan;
	float pi=3.14;
	
	printf("Iki adet kenar uzunlugu giriniz (cm) :");
	scanf("%f %f",&a,&b);
	
	printf("Aci giriniz (derece) :");
	scanf("%f",&aci);
	
	radyan = aci/180*pi;
	
	alan = a*b*sin(radyan)/2;
	printf("Alan = %.2f",alan);
	
}
