#include<stdio.h>
int binarysearch(int arr[],int key,int size){
	int low=0, high=size-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if (arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	printf("192424248\n");
	int arr[10]={2,5,8,12,16,23,38,56,72,91};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("Enter the key: ");
	scanf("%d",&key);
	int result=binarysearch(arr,key,size);
	if(result==-1){
		printf("Element does not exist, invalid Key");
	}
	else{
		printf("The element found at index %d",result);
	}
	return 0;
}