// WAP to convert years into days and days into years

#include <stdio.h>
int main()

{
    int years;
    int days;
    int remaining;

    printf("\nEnter the number of years: ");
    printf("\nEnter the number of days: ");
    scanf("%d", &years);
    scanf("%d", &days);

    days = years * 365;
    years = days / 365;
    remaining = days % 365;

    printf("%d years is approximately %d days.\n", years, days);
    printf("%d days is approximately %d years and %d days.\n", days, years, remaining);

    return 0;
}

