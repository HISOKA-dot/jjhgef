#include <stdio.h>

int main() {

    double kmh, ms;

    printf("\n welcome to the speed converter from km per hour to m per s\n");

    printf("\n============================================================\n");

    printf("\nplease enter the speed in km/h : ");
    scanf("%lf", &kmh);

    ms = kmh * 0.27778;

    printf("\n------------------------------------------\n");

    printf("\nyour speed en m per s is %.3lf ms\n", ms);

    printf("\n============================================================");

return 0;

}