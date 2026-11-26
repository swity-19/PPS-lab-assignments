#include <stdio.h>
    struct student
    {
        int rollno;
        int m1,m2,m3;
        char name[50];
        int total;
        float per;
    };
    int main(){
        int i,n;
    printf("Student information:\n");
    printf("Enter the number of students=");
    scanf("%d",&n);

    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number of the student=\n");
        scanf("%d",&s[i].rollno);

        printf("Enter the name of the student=\n");
        scanf("%s",&s[i].name);

        printf("Enter the marks of 1st subject=\n");
        scanf("%d",&s[i].m1);

        printf("Enter the marks of 2nd subject=\n");
        scanf("%d",&s[i].m2);

        printf("Enter the marks of 3rd subject=\n");
        scanf("%d",&s[i].m3);
    }

    for(i=0;i<n;i++)
    {
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].per=(s[i].total/300.0)*100;
    }
    
        printf("Roll no.\tName\tSubject 1\tSubject 2\tSubject 3\tTotal\tPercentage\n");
        for(i=0;i<n;i++)
    {
        printf("%d\t      %s\t   %d\t        %d\t        %d\t        %d\t     %.2f\n",s[i].rollno,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].per);
    }
    return 0;
}