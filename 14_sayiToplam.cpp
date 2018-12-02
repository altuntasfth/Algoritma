#include<stdio.h>

int main(){
	int a,i,t1=0,t2=0,t3=0;
	
	printf("Bir tam sayi giriniz :");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++){
		t1 += i; 
		if(i%2==0)
			t2 += i;
		else
			t3 += i; 
	}
	printf("1 den %d ye kadar tam sayilarin toplami = %d\n",a,t1);
	printf("1 den %d ye kadar cift tam sayilarin toplami = %d\n",a,t2);
	printf("1 den %d ye kadar tek tam sayilarin toplami = %d",a,t3);
}
