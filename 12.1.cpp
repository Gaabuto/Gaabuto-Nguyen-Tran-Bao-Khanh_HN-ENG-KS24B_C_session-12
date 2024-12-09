#include <stdio.h>
int Calcsum( int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
	int a,b,sum;
	printf("moi ban nhap so thu 1: ");
	scanf("%d",&a);
	printf("moi ban nhap so thu 2: ");
	scanf("%d",&b);
	sum = Calcsum(a,b);
	printf("tong 2 so %d va %d la %d",a,b,sum);
	return 0;
}
