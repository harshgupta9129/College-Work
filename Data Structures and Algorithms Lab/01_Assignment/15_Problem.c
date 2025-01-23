#include<stdio.h>
int strlastoccu (char str[100],char ch) {
    int check = 0;
    int index;
    for (int i=0; str[i]!=0; i++) {
        if (str[i]==ch) {
            check = 1;
            index = i;
        }
    }
    if (check==1) return index+1;
    return -1; 
}
int main () {
    char str[100] = "";
    printf("Enter The String : ");
    scanf("%[^\n]",str);
    char ch=0;
    printf("Enter A Character To Found in String : ");
    getchar();
    scanf("%c",&ch);
    int ans = strlastoccu (str,ch);
    if (ans<0) printf("Not Present");
    else printf("%d",ans);
    return 0;
}