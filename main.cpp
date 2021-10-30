#include <iostream>
int main()
{
}
bool IsLeapYear(int year)
{
int k=0;
return((year&4==0)&&(year%100!=0)||(year%400==0));
}
int SecondsInMinute(int min)
{
return min*60;
}