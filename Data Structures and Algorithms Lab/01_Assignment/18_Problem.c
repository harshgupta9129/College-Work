#include<stdio.h>
int main () {
    char str[100]="";
    printf("Enter A String : ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter The Character To Set : ");
    getchar();
    scanf("%c",&ch);
    printf("Enter Value Of N : ");
    int n = 0;
    scanf("%d",&n);
    int size;
    for (size=0; str[size]!=0; size++) {}
    if (n>size) n=size;
    for (int i=0; i<n; i++) {
        str[i]=ch;
    }
    printf("%s",str);
    return 0;
}