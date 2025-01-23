#include<stdio.h>
int main() {
    char str1[100]="";
    scanf("%[^\n]",str1);
    char str2[100]="";
    int i;
    for (i=0; str1[i]!=0; i++) {
        str2[i]=str1[i];
    }
    str2[i]=0;
    printf("%s",str2);
}