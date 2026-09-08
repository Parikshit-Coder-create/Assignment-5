#include <stdio.h>

int main()
{
    int day, month, year;
    int maximumDays;

    printf("Enter Day  : ");
    printf("Enter Month  :  ");
    printf("Enter Year  :  ");
    scanf("%d %d %d", &day, &month, &year);

    if (year <= 0)
    {
        printf("Invalid date");
    }
    else
    {
        if (month >= 1 && month <= 12)
        {
            if (month == 2)
            {
                if ((year % 400 == 0) || 
                    (year % 4 == 0 && year % 100 != 0))
                    maximumDays = 29;
                else
                    maximumDays = 28;
            }
            else
            {
                if (month == 4 || month == 6 || 
                    month == 9 || month == 11)
                    maximumDays = 30;
                else
                    maximumDays = 31;
            }

            if (day >= 1 && day <= maximumDays)
                printf("Valid date");
            else
                printf("Invalid date");
        }
        else
        {
            printf("Invalid date");
        }
    }

    return 0;
}
