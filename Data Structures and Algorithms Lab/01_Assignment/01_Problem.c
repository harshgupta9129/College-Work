#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char first[20];
    scanf("%s",&first);
    if (!strcmp(first,"Null")) { //For Detect Null
        printf("Error");
        return 0;
    }
    char other[200];
    getchar();
    scanf("%[^\n]",other);
    int intnum = 2;
    for (int i=0; other[i]!=0; i++) { //For Detect How Many Integer Are Available
        if (other[i]==' ') intnum++;
    }
    if (intnum<5) {
        printf("Input is Less Than 5"); //For Input Less Than 5 
        return 0;
    }
    if (intnum>5) {
        printf("Input is More Than 5"); //For Input More Than 5
        return 0;
    }
    int num[5];
    num[0] = atoi(first); //Convert The first string into integer
    int space[3];
    int j = 0;
    for (int i=0; other[i]!=0; i++) {
        if (other[i]==' ') space[j++]=i; //Storing The Index Of Spaces In Other String
    }
    // Checking For Invalid Input
    for (int i=0; first[i]!=0; i++) {
        if (first[i]>47&&first[i]<58) {}
        else {
            printf("Invalid Input\n");
            return 0;
        }
    }
    for (int i=0; other[i]!=0; i++) {
        if (other[i]==' ') continue;
        if (other[i]>47&&other[i]<58) {}
        else {
            printf("Invalid Input\n");
            return 0;
        }
    }
    //Extracting Numbers From Other String
    char s2[20];
    strncpy(s2,other+0,space[0]);
    s2[space[0]]='\0';
    char s3[20];
    strncpy(s3,other+(space[0]+1),space[1]-space[0]);
    s3[space[1]-space[0]]='\0';
    char s4[20];
    strncpy(s4,other+(space[1]+1),space[2]-space[1]);
    s4[space[2]-space[1]]='\0';
    char s5[20];
    strncpy(s5,other+(space[2]+1),strlen(other)-space[2]);
    s5[strlen(other)-space[1]]='\0';
    num[1] = atoi(s2); //Convert The s2 string into integer
    num[2] = atoi(s3); //Convert The s3 string into integer
    num[3] = atoi(s4); //Convert The s4 string into integer
    num[4] = atoi(s5); //Convert The s5 string into integer

    //Checking Overflow Values
    for (int i=0; i<5; i++) {
        if (num[i]>=INT_MAX || num[i]<=INT_MIN) {
            printf("It will Calculate correctly but will display wrong output due to Overflow");
            return 0;
        }
    }
    
    //Calculating Sum Of five Number using Pointer
    int sum = 0;
    int* ptr = num;
    for (int i=0; i<5; i++) {
        sum+=(*ptr++);
    }
    printf("%d",sum);
}