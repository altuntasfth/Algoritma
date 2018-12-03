#include<stdio.h>
#include<math.h>

int main(){
	float r,alan,hacim;
	float pi=3.14;
	
	printf("Yaricap uzunlugunu giriniz (cm) :");
	scanf("%f",&r);
	
	alan = 4*pi*r*r;
	printf("Alan = %.2f\n",alan);
	
	hacim = 4*pi*r*r*r/3;
	printf("Hacim = %.2f",hacim);
}
