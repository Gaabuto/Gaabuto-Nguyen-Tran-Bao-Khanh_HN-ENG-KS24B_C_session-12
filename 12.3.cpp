#include <stdio.h>
long tinhGiaiThuat(int a) {
     long giaiThuat = 1;
    for (int i = 1; i <= a; i++) {
        giaiThuat *= i;
    }
    return giaiThuat;
}

int main(){
	int a;
	printf("moi ban nhap 1 so bat ki: ");
	scanf("%d",&a);
	
	if (a < 0){
		printf("so am khong the tinh duoc giai thua");
	}else{
		printf("giai thua cua so %d la %d", a, tinhGiaiThuat(a));
	}
	
	return 0;
}
