#include<stdio.h>
int main () {
    char str[100]="";
    printf("Enter The String : ");
    scanf("%[^\n]",str);
    char sub[20];
    printf("Enter The Sub String : ");
    getchar();
    scanf("%[^\n]",sub);
    for (int i=0; str[i]!=0; i++) {
        int check = 0;
        int j=0;
        if (str[i]==sub[j]) {
            for (j=0; sub[j]!=0; j++) {
                if (sub[j]==str[i+j]) {
                    check = 1;
                    continue;
                }
                else {
                    check = 0;
                    break;
                }
            }
        }
        if (check==1) {
            printf("Substring %s found at position %d in string.",sub,i);
            return 0;
        }
    }
    printf("Substring %s not found in string.",sub);
    return 0;
}