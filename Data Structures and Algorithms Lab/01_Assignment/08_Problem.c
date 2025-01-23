#include<stdio.h>
int main() {
    char str1[100]="";
    char str2[100]="";
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    int n=0;
    scanf("%d",&n);
    int j;
    for (j=0; str1[j]!=0; j++) {}
    for (int i=0; i<n; i++) {
        str1[i+j]=str2[i];
    }
    printf("%s",str1);
}