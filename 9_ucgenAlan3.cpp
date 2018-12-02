#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,u,alan;
	
	printf("Ucgenin kenar uzunluklarini giriniz (cm) :");
	scanf("%f%f%f",&a,&b,&c);
	
	u = (a+b+c)/2;
	alan = sqrt(u*(u-a)*(u-b)*(u-c));
	printf("Alan = %.2f",alan);
}
