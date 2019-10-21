#include <stdio.h>
#include <stdlib.h>

int main()
{

    // VARIABLE DECLARATION AREA
    int day1, day2, day3, day4, day5, day6,day7;
    int result;
    char choice;

    printf("Enter 1st day");
    scanf("%d", &day1);
    printf("Enter second day");
    scanf("%d", &day2);
    printf("Enter third day");
    scanf("%d", &day3);
    printf("Enter fourth day");
    scanf("%d", &day4);
    printf("Enter fifth day");
    scanf("%d", &day5);
    printf("Enter sixth day");
    scanf("%d", &day6);
    printf("Enter seventh day");
    scanf("%d", &day7);

    printf("Enter choice");

    scanf(" %c", &choice);
    if(choice == 'Monday')
    {
        result = "Today is ICT Class";
    }
    else if(choice == 'Tuesday')
    {
        result = "Today is Programming class";
    }
    else if(choice == 'Wednesday')
    {
        result = "Today is Physics class";
    }
    else if(choice == 'Thursday')
    {
        result = "Today is English class";
    }
    else if(choice == 'Friday')
    {
        result = "Today is Mathematics class";
    }
else if(choice == 'Saturday')
    {
        result = "Today is Holiday";
    }
    else if(choice == 'Sunday')
    {
        result = "Today is Holiday";
    }
    return 0;

   }

