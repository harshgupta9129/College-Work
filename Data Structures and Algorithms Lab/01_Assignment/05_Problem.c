#include<stdio.h>
int main() {
    char str[100]="";
    scanf("%[^\n]",str);
    for (int i=0; str[i]!=0; i++) {
        if (str[i]>64 && str[i]<91) str[i]+=32;
    }
    printf("%s",str);
}