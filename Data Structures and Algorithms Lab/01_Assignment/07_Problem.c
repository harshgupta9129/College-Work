#include<stdio.h>
int main() {
    char str1[100]="";
    char str2[100]="";
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    int j;
    for (j=0; str1[j]!=0; j++) {}
    for (int i=0; str2[i]!=0; i++) {
        str1[i+j]=str2[i];
    }
    printf("%s",str1);
}