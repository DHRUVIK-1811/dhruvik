#include <iostream>
int main()
{
    int d, year, month, week, days = 0;

    std::cout << "\nenter Day:";
    std::cin >> d;

    year = d / 365;
    std::cout << "\nyear:" << year;

    d = d - year * 365;
    month = d / 30;
    std::cout << "\nmonth:" << month;

    d = d - month * 30;
    week = d / 7;
    std::cout << "\nweek:" << week;

    d = d - week * 7;
    days = d;
    std::cout << "\ndays:" << days;
}
