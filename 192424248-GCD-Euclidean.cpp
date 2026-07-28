#include <stdio.h>

int gcd(int a,int b) {
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main() {
	printf("%s","192424248");
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("GCD = %d",gcd(a,b));

    return 0;
}