#include<stdio.h>
int main(){
	int array[100];
	int dodai,vitri;
	printf("nhap so phan tu muon nhap 1-100: ");
	scanf("%d",&dodai);
	if(dodai<1||dodai>100){
		printf("nhap phan tu khong hop le");
		return 1;
	}
	for(int i=0;i<dodai;i++){
		printf("nhap gia tri phan tu %d: ",i);
		scanf("%d",&array[i]);	
		
	}
	printf("vi tri muon xoa tu 0-%d: ",dodai-1);
	scanf("%d",&vitri);
	if(vitri<0||vitri>=dodai){
		printf("vi tri khong hop le.\n");
		return 1;
	}
	for(int i=vitri;i<dodai-1;i++){
		array[i]=array[i+1];
	}
	dodai--;
	printf("mang sau khi xoa: ");
	for(int i=0;i<dodai;i++){
		printf("%d ",array[i]);

		
	}
	printf("\n");
	return 0;
}
