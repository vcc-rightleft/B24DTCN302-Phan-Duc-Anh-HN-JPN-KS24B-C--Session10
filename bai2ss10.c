#include<stdio.h>
int main(){
int a[]={12,1,3,1,5,4,1,4,};
int n=sizeof(a)/sizeof(a[0]);
int sapxep;
printf("mang hien tai la: ");
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
printf("\nmang sau khi sap xep la: ");
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(a[j+1]<a[j]){
			int vt=a[j+1];
			a[j+1]=a[j];
			a[j]=vt;
		}
	}
}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}

