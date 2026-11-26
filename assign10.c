#include <stdio.h>
int main() {
    int year,month,day,days,start;

    printf("Enter the year:");
    scanf("%d",&year);

    start= (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

    for(month=0;month<=12;month++)
    {
        printf("\n\n");

        if(month==1)
        printf("     January\n");
        else if(month==2)
        printf("     Februaury\n");
        else if(month==3)
        printf("     March\n");
        else if(month==4)
        printf("     April\n");
        else if(month==5)
        printf("     May\n");
        else if(month==6)
        printf("     June\n");
        else if(month==7)
        printf("     July\n");
        else if(month==8)
        printf("     August\n");
        else if(month==9)
        printf("     September\n");
        else if(month==10)
        printf("     October\n");
        else if(month==11)
        printf("     November\n");
        else 
        printf("     December\n");

        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        if(month==2)
        {
            if((year%400==0)||(year%4==0 && year!=0))
            days=29;
            else
            days=28;
        }
        else if(month==4||month==6||month==9||month==11)
        days=30;
        else
        days=31;
        for(day=0;day<start;day++)
        {
            printf("    ");
        }

        for(day=1;day<=days;day++)
        {
            printf("%4d",day);

            if((start+day)%7==0)
            printf("\n");
        }
        start=(start+days)%7;
        }
        return 0;


}