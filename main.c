#include <stdio.h>
#include <stdlib.h>

int main() {

    int seconds, secs, hours, minutes;
    printf("Enter the number of seconds you want to convert: ");
    scanf("%d", &seconds);

    hours = (seconds/3600);
    minutes = (seconds - (3600*hours))/60;
    secs = (seconds -(3600*hours)-(minutes*60));

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", secs);


    return 0;
}
