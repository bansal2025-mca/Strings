#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter string : ");
    gets(str);
    printf("String is : %s\n",str);
    printf("Reverse Sgtring is %s ",strrev(str));
    return 0;
}