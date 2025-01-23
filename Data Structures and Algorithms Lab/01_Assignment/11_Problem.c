#include<stdio.h>
int main() {
    char str1[100]="";
    char str2[100]="";
    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);
    int size1 = 0;
    while(str1[size1++]!=0) {}
    int size2 = 0;
    while(str2[size2++]!=0) {}
    if (size1==size2) {
        for (int i=0; str1[i]!=0; i++) {
            if (str1[i]!=str2[i]) {
                printf("%d\n",1);
                return 0;
            }
        }
        printf("%d",0);
        return 0;
    }
    else if (size1<size2) {
        printf("%d",-44);
        return 0;
    }
    else {
        printf("%d",44);
        return 0;
    }
}