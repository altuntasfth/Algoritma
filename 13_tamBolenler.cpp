#include<stdio.h>

int main(){
	int a,i;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&a);
	
	i=1;
	for(i=1;i<=a;i++){
		if(a%i==0)
			printf("%d ",i);
	}
	printf("Sayisi %d sayisinin tam bolenleridir.",a);
}
