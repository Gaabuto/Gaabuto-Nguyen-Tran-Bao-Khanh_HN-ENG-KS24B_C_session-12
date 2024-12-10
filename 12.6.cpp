#include <stdio.h>

int sohoanhao(int a){
	if ( a <= 1) 
	return 0;
	int sum = 0;
	for ( int i = 1; i < a; i ++){
		if(a % i == 0){
			sum += i;
		}
	}
	return sum == a;
}
	
	int main(){
		int st1 ,st2;
		printf("moi ban nhap so thu nhat: ");
		scanf("%d",&st1);
		printf("moi ban nhap so thu 2: ");
		scanf("%d",&st2);
		printf("\n");
		if(sohoanhao(st1)){
			printf("so thu 1 true");
		}else{
			printf("so thu 1 false");
		}
		printf("\n");
		if(sohoanhao(st2)){
			printf("so thu 2 true");
		}else{
			printf("so thu 2 false");
		}
	return 0;
}
