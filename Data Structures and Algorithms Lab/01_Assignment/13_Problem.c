#include<stdio.h>
int strwordcmp (char str1[],char str2[]) {
    int size1;
    for (size1=0; str1[size1]!=0; size1++) {}
    int size2;
    for (size2=0; str2[size2]!=0; size2++) {}
    if (size1>size2) return -(str1[size1-1]);
    if (size1<size2) return -(str2[size2-1]);
    for (int i=0; i<size1; i++) {
        int check = str1[i]-str2[i];
        if (check==0||check==(-32)||check==32) {}
        else {
            return -(size1);
        }
    }
    return 0;
}
int main () {
    char str1[100]="";
    char str2[100]="";
    printf("Enter The First String : ");
    scanf("%[^\n]",str1);
    printf("Enter The Second String : ");
    getchar();
    scanf("%[^\n]",str2);
    int ans = strwordcmp(str1,str2);
    printf("%d",ans);
    return 0;
}