#include<stdio.h>
int main () {
    char str[100]="";
    printf("Enter A String : ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter The Character To Set : ");
    getchar();
    scanf("%c",&ch);
    for (int i=0; str[i]!=0; i++) {
        str[i]=ch;
    }
    printf("%s",str);
    return 0;
}