#include <stdio.h>

int songuyento(int a){
	if ( a < 2)
	return 0;
	for ( int i = 2; i < a; i ++){
		if ( a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int a;
	printf("moi ban nhap 1 so: ");
	scanf("%d",&a);
	
	if(songuyento(a)){
		printf("true");
	}else{
		printf("false");
	}
}
