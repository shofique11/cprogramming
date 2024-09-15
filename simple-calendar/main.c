#include <stdio.h>
#include <stdlib.h>

int get_last_weekday_year(int year)
{
    int d;
    d = (((year - 1)*365) + ((year-1)/4) - ((year -1)/100) + ((year)/400) + 1)%7;
    return d;
}
int main()
{
   system("Color 3F");
   int year, month, monthDays,weekDay=0,startingDay;
   printf("Enter your desired year:\n");
   scanf("%d", &year);
   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
   if((year%4==0 && year%100 !=0) || year %400 ==0)
    monthDay[1] = 29;
    startingDay = get_last_weekday_year(year);

   for(int i=0;i<12;i++)
   {
       monthDays = monthDay[i];
       printf("---------------%s-------------\n",months[i]);
       printf("\n Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
       for(weekDay=0; weekDay<startingDay;weekDay++)
        printf("     ");
       for(int day = 1; day <= monthDays; day++)
       {
           printf("%5d",day);
           if(++weekDay > 6)
           {
               printf("\n");
               weekDay=0;
           }
           startingDay = weekDay;
       }
       printf("\n");
   }
    return 0;
}
