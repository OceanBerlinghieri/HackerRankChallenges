#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MINUTES 60
#define HOURS 24
int main() {
    int hour, minutes, hourDuration, minutesDuration, sumHours;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d %d", &hour, &minutes);
    scanf("%d %d", &hourDuration, &minutesDuration);
    
    minutes+=minutesDuration;
    hour+=hourDuration;
    
    while(minutes >= MINUTES) {
        minutes-=MINUTES;
        sumHours++;
    }
    
    hour+=sumHours;
    while(hour >= HOURS) {
        hour-=HOURS;
    }
    
    printf("%02d %02d", hour, minutes);
    return 0;
}