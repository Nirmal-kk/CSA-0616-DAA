#include<stdio.h>
int main(){
	printf("192424248\n");
	int arr[5]={10,25,30,45,50};
	int key,i;
	scanf("%d",&key);
	for(i=0;i<sizeof(arr);i++){
		if (arr[i]==key){
			printf("Found at Index %d",i);
			break;
		}
	}
	return 0;
}