#include<stdio.h>
int main() {
    char str1[100]="";
    scanf("%[^\n]",str1);
    getchar();
    char str2[100]="";
    scanf("%[^\n]",str2);
    int n=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        str2[i]=str1[i];
    }
    printf("%s",str2);
}