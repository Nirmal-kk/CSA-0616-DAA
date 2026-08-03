#include <stdio.h>

int merge(int a[], int temp[], int left, int mid, int right) {
    int i=left,j=mid,k=left,inv=0;

    while(i<=mid-1 && j<=right) {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else {
            temp[k++]=a[j++];
            inv += mid-i;
        }
    }

    while(i<=mid-1)
        temp[k++]=a[i++];

    while(j<=right)
        temp[k++]=a[j++];

    for(i=left;i<=right;i++)
        a[i]=temp[i];

    return inv;
}

int mergeSort(int a[], int temp[], int left, int right) {
    int inv=0;

    if(right>left) {
        int mid=(left+right)/2;

        inv+=mergeSort(a,temp,left,mid);
        inv+=mergeSort(a,temp,mid+1,right);
        inv+=merge(a,temp,left,mid+1,right);
    }

    return inv;
}

int main() {
    int n;
	printf("%s","192424248");
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n],temp[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Inversions = %d",mergeSort(a,temp,0,n-1));

    return 0;
}