#include<stdio.h>

int fact(int x){
	int i,y=1;
	for(i=1; i<=x; i++)
		y *=i;	
	return y;
}

int main(){
	int n,r,a,komb,f1,f2,f3;
	printf("Kobinsayon (n,r) :");
	scanf("%d%d",&n,&r);
	
	f1 = fact(n);
	f2 = fact(r);
	f3 = fact(n-r);
	komb = f1/(f2*f3);
	printf("Kobinsayon (%d,%d) = %d",n,r,komb);
}
