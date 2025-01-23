#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main() {
    char str[100]="";
    scanf("%[^\n]",str);
    if (strlen(str)==0) {
        printf("Wrong Input\n");
        return 0;
    }
    int num_of_int = 1;
    for (int i=0; str[i]!=0; i++) {
        if (str[i]==32) num_of_int++;
    }
    if (num_of_int==1) {
        printf("Enter More Than 1 value\n");
        return 0;
    }
    int space[num_of_int+1];
    space[0]=0;
    space[num_of_int]=strlen(str);
    int j = 1;
    for (int i=0; str[i]!=0; i++)  {
        if (str[i]==32) space[j++]=i;
    }
    int num[num_of_int];
    for (int i=0; i<num_of_int; i++) {
        char s[20];
        strncpy(s,str+space[i],(space[i+1]-space[i]));
        s[space[i+1]-space[i]] = 0;
        num[i]=atoi(s);
    }
    for (int i=0; i<num_of_int-1; i++) {
        int min = i;
        for (int j=i+1; j<num_of_int; j++) {
            if (num[j]<num[min]) min=j;
        }
        int temp = num[i];
        num[i] = num[min];
        num[min] = temp;
    }
    for (int i=0; i<num_of_int; i++) {
        printf("%d ",num[i]);
    }
}