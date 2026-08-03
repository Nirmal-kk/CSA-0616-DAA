#include <stdio.h>

long long power(long long x,long long n) {
    if(n==0)
        return 1;

    if(n%2==0)
        return power(x*x,n/2);

    return x*power(x,n-1);
}

int main() {
    long long x,n;
	printf("%s","192424248");
    printf("Enter base and exponent: ");
    scanf("%lld%lld",&x,&n);

    printf("Result = %lld",power(x,n));

    return 0;
}