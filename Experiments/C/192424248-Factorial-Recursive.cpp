#include<stdio.h>
int factorial(int num){
	if(num<=1){
		return 1;
	}
	return num*factorial(num-1);
}
int main(){
	printf("192424248\n");
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("The factorial of %d is %d",num,factorial(num));
}
