#include<stdio.h>
int main(){
int a[]={1,2,5,4,3,6,7,9,10,11,8,17,5};
int n=sizeof(a)/sizeof(a[0]);
int gt,kt=0;
printf("mang hien tai: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(a[j]<a[j+1]){
			int vt=a[j+1];
			a[j+1]=a[j];
			a[j]=vt;
		}
	}
}
printf("\nmang sau khi sap xep: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
printf("\nNhap phan tu muon tim: ");
scanf("%d",&gt);
printf("vi tri phan tu %d trong mang: ",gt);
for(int i=0;i<n;i++){
	if(a[i]==gt){
		printf("%d",i+1);
		kt=1;
	}
}
	if(!kt){
	printf("phan tu khong hop le!!!");
	}
return 0;
}

