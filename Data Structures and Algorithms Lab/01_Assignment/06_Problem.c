#include<stdio.h>
int main() {
    char str[100]="";
    scanf("%[^\n]",str);
    for (int i=0; str[i]!=0; i++) {
        if (str[i]>96&&str[i]<123) str[i]-=32; 
    }
    printf("%s",str);
}