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
    "Today is %A, %B %d, %Y\nIt is %H:%M:%S\n", clock);



    printf("Greetings");
    if(argc>1)
        printf(", %s",argv[1]);
    printf("!\n%s", time_string);

    return 0;

}
