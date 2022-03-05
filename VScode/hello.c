#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ap;
    int temp;

    scanf("%d", &n);

    ap=(int *)malloc(n*sizeof(int));

    FILE *fp;
    fp=fopen("pt_exer.txt", "r");
    for (int i=0; i<n; i++) {
        fscanf(fp, "%d", &ap[i]);
    }
    fclose(fp);

    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=0; j--) {
            if (ap[i]>ap[i+1]) {
                temp=ap[i];
                ap[i]=ap[i+1];
                ap[i+1]=temp;
            }
        }
    }

    FILE *fp1;
    fp1=fopen("output.txt", "w");
    fprintf(fp1, "%d", ap[1]);
    fclose(fp1);

    free(ap);

    return 0;
}