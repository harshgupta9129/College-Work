#include<stdio.h>
int main() {
    char str[100]="";
    scanf("%[^\n]",str);
    int i;
    for (i=0; str[i]!=0; i++);
    printf("The Size of Given String is %d\n",i);
}