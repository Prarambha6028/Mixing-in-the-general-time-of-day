#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[])
{
    time_t now;
    struct tm *clock;
    char time_string[256]; // or try 512 to be extra sure


    time(&now);
    clock = localtime(&now);

      strftime(time_string, sizeof(time_string),
    "Today is %A, %B %d, %Y\nIt is %H:%M:%S\n", clock); // strftime() function, which formats a timestamp string according to your specifications
    /*The strftime() function works like printf(), with a special
string that formats time information. The function’s output is
saved in a buffer*/

/* %A is Full name for the current day of the week, %B is Full name for the current month, %d is Day of the month, 01 to 31, %Y is 4-digit year,
%r is Time with AM/PM*/
    
    printf("Greetings");
    if(argc>1)
        printf(", %s",argv[1]);
    printf("!\n%s", time_string);

    return 0;

}

