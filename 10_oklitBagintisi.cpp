#include<stdio.h>
#include<math.h>

int main(){
	float p,k,h,b,c,a;
	
	printf("p ve k degerlerini giriniz (cm) :");
	scanf("%f%f",&p,&k);
	
	a = p+k;
	h = sqrt(p*k);
	b = sqrt(a*k);
	c = sqrt(a*p);
	printf("h = %.2f \nb = %.2f \nc = %.2f \n",h,b,c);
}
