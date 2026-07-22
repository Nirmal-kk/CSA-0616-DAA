#include<stdio.h>
int factorial(int num){
	int fact=1;
	int i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	printf("192424248\n");
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("The factorial of %d is %d",num,factorial(num));
}