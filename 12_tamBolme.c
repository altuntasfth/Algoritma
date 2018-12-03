#include<stdio.h>

int main(){
	int a,b;
	printf("Bir tam sayi ve girilen sayiyi bolecek baska bir sayi giriniz :");
	scanf("%d%d",&a,&b);
	
	if(a%b==0)
		printf("%d sayisi %d sayisina tam bolunur.",a,b);
	else
		printf("%d sayisi %d sayisina tam bolunmez.",a,b);
}
