#include<stdio.h>

int main(){
	float aci,radyan,grad;
	float pi=3.14;
	
	printf("Aci giriniz (derece) :");
	scanf("%f",&aci);
	
	radyan = aci/180*pi;
	printf("Radyan = %.2f\n",radyan);
	
	grad = aci/180*200;
	printf("Grad = %.2f",grad);
}
