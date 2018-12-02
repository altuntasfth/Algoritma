#include<stdio.h>

int main(){
	int a;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d cift sayidir.",a);
	else
		printf("%d tek sayidir.",a);
}
