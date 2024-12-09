#include <stdio.h>

void printfAr(int ar[],int a){
	printf("cac phan tu co trong mang la: ");
		for( int i = 0; i < a; i ++){
			printf("%d ",ar[i]);
	}
}
int main(){
	int a;
	printf("moi ban nhap so phan tu co trong mang: ");
	scanf("%d",&a);
	int ar[a];
	for(int i = 0; i < a; i ++){
		printf(" moi ban nhap phan tu thu %d: ", i  + 1);
		scanf("%d", &ar[i]);
	}
	printfAr(ar,a);
	 
	return 0;
}
