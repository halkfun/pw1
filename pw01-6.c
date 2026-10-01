#include <stdio.h>

#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY 24
#define SECONDS_IN_HOUR 3600

int main() {
    int years = 18;
    int days = years * DAYS_IN_YEAR;
    int hours = days * HOURS_IN_DAY;
    long long ticks = (long long)hours * SECONDS_IN_HOUR; //для больших целых чисел

    printf ("Тики: %lld | Часы: %d | Дни: %d | Годы: %d\n", ticks, hours, days, years);

    return 0;

}
