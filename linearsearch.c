#include<stdio.h>
int linearSearch(int [],int , int);
int main(){
	int arr[100],l,x;
	printf("Enter size of Array: ");
	scanf("%d",&l);
	printf("Enter Your Array: ");
	for(int i=0;i<l;i++){
	scanf("%d",&arr[i]);
	}
	printf("Enter element you want to search: ");
	scanf("%d",&x);
	if(linearSearch(arr,l,x)){
	printf ("Element found at %d",linearSearch(arr,l,x));}		
}
int linearSearch(int arr[], int l,int x){
if(arr[l-1]==x)
	return l-1;
return linearSearch(arr,l-1,x);
}
