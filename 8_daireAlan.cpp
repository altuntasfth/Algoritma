#include<stdio.h>
#include<math.h>

int main(){
	float r,alan,aci;
	float pi=3.14;
	
	printf("Yaricap uzunlugunu giriniz (cm) :");
	scanf("%f",&r);
	
	printf("Aci giriniz (derece) :");
	scanf("%f",&aci);
	
	alan = aci*pi*r*r/360;
	printf("Alan = %.2f\n",alan);
	
}
