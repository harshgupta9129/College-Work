#include<stdio.h>
int main() {
    int n;
    printf("Enter The Size of Array : ");
    scanf("%d",&n);
    printf("Enter The Elements : ");
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int no_of_0 = 0;
    int no_of_1 = 0;
    int no_of_2 = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]==0) no_of_0++;
        if (arr[i]==1) no_of_1++;
        if (arr[i]==2) no_of_2++;
    }
    for (int i=0; i<no_of_0; i++) {
        arr[i]=0;
    }
    for (int i=0; i<no_of_1; i++) {
        arr[no_of_0 + i]=1;
    }
    for (int i=0; i<no_of_2; i++) {
        arr[no_of_0 + no_of_1 +i]=2;
    }
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}