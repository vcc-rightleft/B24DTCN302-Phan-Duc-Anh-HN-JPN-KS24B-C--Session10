#include<stdio.h>
int main(){
int a[]={1,2,3,9,5,6,7,8,9,10};
int x=sizeof(a)/sizeof(a[0]);
int kiemtra=0,n,vt;
printf("mang hine tai la: ");
for(int i=0;i<x;i++){
	printf("%d ",a[i]);
}
printf("\nmoi nhap vao phan tu: ");
scanf("%d",&n);
printf("vi tri cua phan tu %d trong mang la: ",n);
for(int i=0;i<x;i++){
	if(a[i]==n){
		printf("%d",i+1);
		kiemtra=1;
	}
}
	if(!kiemtra){
	printf("phan tu khong ton tai trong mang!!");
	}
return 0;
}

