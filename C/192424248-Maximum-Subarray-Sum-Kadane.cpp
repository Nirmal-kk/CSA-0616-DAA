#include <stdio.h>

int main() {
    int n;
	printf("%s","192424248");
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[0],curr=a[0];

    for(int i=1;i<n;i++) {
        if(curr+a[i]>a[i])
            curr=curr+a[i];
        else
            curr=a[i];

        if(curr>max)
            max=curr;
    }

    printf("Maximum Sum = %d",max);

    return 0;
}