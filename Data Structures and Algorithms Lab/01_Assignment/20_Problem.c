#include<stdio.h>
int main () {
    char str[100] = "";
    printf("Enter A String : ");
    scanf("%[^\n]",str);
    int spaces = 0;
    int length;
    for (length=0; str[length]!=0; length++) {}
    for (int i=0; str[i]!=0; i++) {
        if (str[i]==32 && str[i+1]!=32 && ((i+1)!=length)) spaces++;
    }
    if (length==0) printf("%d",spaces);
    else if (str[length-1]!=32)printf("%d",spaces+1);
    else printf("%d",spaces);
    return 0;
}