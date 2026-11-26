#include <stdio.h>
int main () {
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen("fp1.txt","r");
    fp2=fopen("fp2.txt","w");

    if(fp1==NULL || fp2==NULL)
    {
        printf("Unable to open files.");
        return 1;
    }

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("File copied successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;

}