#include <iostream>
int main()
{
}
bool IsLeapYear(int year)
{
return ((year%4==0)&&(year%100!=0)||(year%400==0));
}
int SecondsInMinute(int hour)
{
return hour*3600;
}
