#include<stdio.h>
int binarySearch(int [],int , int, int);
int main(){
	int arr[100],l=0,u,x;
	printf("Enter size of Array: ");
	scanf("%d",&u);
	printf("Enter your Array");
	for(int i=0;i<u;i++){
		scanf("%d",&arr[i]);
	}
	printf("Element you want to search: ");
	scanf("%d",&x);
	if(binarySearch(arr,l,u,x))
		printf("Element found at %d",binarySearch(arr,0,u,x));
}
int binarySearch(int arr[],int l, int u, int x){
if(l<=u)
{
	int mid=((l+u)/2);
	if(arr[mid]==x){
		return mid;
	}
	else if(arr[mid]<x)
	{
		l=mid+1;
		binarySearch(arr,l,u,x);
	}
	else
	{
		u=mid-1;
		binarySearch(arr,l,u,x);
	}
}}
