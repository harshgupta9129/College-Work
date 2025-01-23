#include<stdio.h>
int main () {
    char str[100]="";
    printf("Enter A String To Reverse it : ");
    scanf("%[^\n]",str);
    int size;
    for (size=0; str[size]!=0; size++) {}
    if (size==0) {
        printf("Empty String\n");
        return 0;
    }
    for (int i=0; i<size/2; i++) {
        char temp = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp;
    }
    printf("%s",str);
    return 0;
}