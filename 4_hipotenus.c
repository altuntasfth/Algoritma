#include<stdio.h>
#include<math.h>

int main(){
	float a,b,hipotenus;
	float pi=3.14;
	
	printf("Iki adet dik kenar uzunlugu giriniz (cm) :");
	scanf("%f %f",&a,&b);
	
	hipotenus = sqrt(a*a + b*b);
	printf("Hipotenus = %.2f",hipotenus);
	
}
