#include<stdio.h>
int main(){
int a[]={1,5,4,54,6,7,5,4,7};
int n=sizeof(a)/sizeof(a[0]);
printf("mang hien tai la: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
for(int i=1;i<n;i++){
	int vt=a[i];
	int j=i-1;
	while(j>=0 &&a[j] > vt){
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=vt;
}
printf("\nmang sau khi sap xep : ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

