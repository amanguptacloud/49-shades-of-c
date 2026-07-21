// Check whether a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("enter word:");
    scanf("%s",word);

    char t[100];
    strcpy(t,word);

    char n[100];

    int i;
    for( i=0;word[i]!='\0';i++){
    }
    i=i-1;
    int j;
    for(j=0;i>=0;j++,i--) {
        n[j]=word[i];
    }
    n[j] = '\0';
    printf("reverse is:%s\n",n);

    if(strcmp(t,n)==0){
        printf("equal");
        return 0;
    } else{
        printf("not equal");
    }
}