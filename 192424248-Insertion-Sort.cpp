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

    for(int i=1;i<n;i++) {
        int key=a[i];
        int j=i-1;

        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }

    printf("Sorted Array:\n");

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}