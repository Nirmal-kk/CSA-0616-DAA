#include <stdio.h>
#include <math.h>

struct Point {
    int x,y;
};

int main() {
    int n;
	printf("%s","192424248");
    printf("Enter number of points: ");
    scanf("%d",&n);

    struct Point p[n];

    printf("Enter points:\n");

    for(int i=0;i<n;i++)
        scanf("%d%d",&p[i].x,&p[i].y);

    double min=1e9;
    int a,b;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            double d=sqrt(pow(p[i].x-p[j].x,2)+pow(p[i].y-p[j].y,2));

            if(d<min) {
                min=d;
                a=i;
                b=j;
            }
        }
    }

    printf("Closest Pair: (%d,%d) and (%d,%d)\n",
           p[a].x,p[a].y,p[b].x,p[b].y);

    printf("Distance = %.2lf",min);

    return 0;
}