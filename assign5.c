#include <stdio.h>
#include <string.h>
int main() {
    int choice;
    char str1[100];
    char str2[100];

    printf("String operations menu\n");
    printf("1.String length\n");
    printf("2.String copy\n");
    printf("3.String concatenation\n");
    printf("4.String compare\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter string:\n");
        scanf("%s",str1);
        printf("Length of the first string is=%ld\n", strlen(str1));
        break;

        case 2:
        printf("Enter string:\n");
        scanf("%s",str1);
        printf("Enter string:\n");
        scanf("%s",str2);
        strcpy(str2,str1);
        printf("After copying= %s\n",str2);
        break;
  

        case 3:
        printf("Enter string:\n");
        scanf("%s",str1);
        printf("Enter string:");
        scanf("%s",str2);
        strcat(str1,str2);
        printf("After concatenation:%s\n", str1);
        break;

        case 4:
        printf("Enter string:\n");
        scanf("%s",str1);
        printf("Enter string:\n");
        scanf("%s",str2);
       if(strcmp(str1, str2) == 0)
       printf("Both strings are equal.\n");
       else if(strcmp(str1, str2) > 0)
       printf("First string is greater than second string.\n");
       else
       printf("First string is smaller than second string.\n");  
        break;

        default:
        printf("Invalid choice\n");
    }
    return 0;
}