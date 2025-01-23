#include<stdio.h>
int main() {
    char str1[100]="";
    char str2[100]="";
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    getchar();
    int n;
    scanf("%d",&n);
    int size1 = 0;
    while(str1[size1++]!=0) {}
    int size2 = 0;
    while(str2[size2++]!=0) {}
    if (size1==size2) {
        if (n>size1) {
            printf("Invalid Input\n");
            return 0;
        }
    }
    if (n>size1) {
        printf("Length of string 1 is less than n\n");
        return 0;
    }
    if (n>size2) {
        printf("Length of string 2 is less than n\n");
        return 0;
    }
    for (int i=0; i<n; i++) {
        if (str1[i]!=str2[i]) {
            printf("%d",-(i+1));
            return 0;
        }
    }
    printf("%d",0);
}