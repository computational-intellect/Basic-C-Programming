#include <stdio.h>
#include <stdlib.h>

/* Standard Main Entry to Program, will not pass in arguments unti later tutorials */
int main()
{
    int exit_cond = 0;   /* integer for storing exit condition */
    char name1 = 'J';    /* character 1 to store first letter */
    char name2 = 'a';    /* character 2 to store second letter */
    char name3 = 'm';    /* character 3 to store third letter */
    char name4 = 'e';    /* character 4 to store fourth letter */
    char name5 = 's';    /* character 5 to store fifth letter */
    int ssn = 123456789; /* integer to store ssn */
    int month = 05;      /* integer to store month of year, ex: 01 */
    int day = 23;        /* integer to store day of week, ex: 01 */
    int year = 1986;     /* integer to store year, ex: 2000 */

    /* The next three printf statement will print
       -Name using all the characters defined earlier
       -SSN using the integer that stored the number
       -DOB using the integers for month, day and year */
    printf("Name -> %c%c%c%c%c\n", name1, name2, name3, name4, name5);
    printf("SSN -> %d\n", ssn);
    printf("DOB -> %d/%d/%d\n", month, day, year);

    /* Exit condition */
    return (0);
}

