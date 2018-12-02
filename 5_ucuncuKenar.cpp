#include<stdio.h>
#include<math.h>

int main(){
	float a,b,aci,c,radyan;
	float pi=3.14;
	
	printf("Iki adet kenar uzunlugu giriniz (cm) :");
	scanf("%f %f",&a,&b);
	
	printf("Aci giriniz (derece) :");
	scanf("%f",&aci);
	
	radyan = aci/180*pi;
	
	c = sqrt(a*a + b*b - 2*a*b*cos(radyan));
	printf("Ucgenin 3. kenar uzunlugu = %.2f",c);
	
}
