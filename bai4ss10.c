#include<stdio.h>
int main(){
int a[]={109,2,4,4,5,7,5,100};
int n=sizeof(a)/sizeof(a[0]);
printf("mang hien tai la: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
for(int i=0;i<n-1;i++){
	int min=i;
	for(int j=i+1;j<n;j++){
		if(a[j]<a[min]){
			min=j;
		}
	}
	int vt=a[min];
	a[min]=a[i];
	a[i]=vt;
}
printf("\nmang sau khi sap xep la: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

