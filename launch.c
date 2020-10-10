#include "launch.h"

#include <unistd.h>
#include <stdio.h>

int launch_mission(struct rocket *rocket)
{
    printf("Last checks before rocket launch:\n");
    sleep(1);

    int astronaut_count = rocket->astronaut_count;

    int rocket_full = astronaut_count == 3;
    printf("Checking travel gear: OK\n");
    printf("Checking austronauts count: %d/3 - %s\n",
            astronaut_count,
            rocket_full ? "OK" : "KO"
    );


    int swap_res = swap_seats(rocket,
                              rocket->astronauts[0]->name,
                              rocket->astronauts[2]->name);

    printf("Checking seats: %s\n", swap_res ? "OK" : "KO");

    if (!rocket_full) {
        return 1;
    }


    printf("\nLaunching rocket in ");
    fflush(stdout);
    sleep(1);
    printf("3 ");
    fflush(stdout);
    sleep(1);
    printf("2 ");
    fflush(stdout);
    sleep(1);
    printf("1");
    fflush(stdout);
    sleep(1);
    printf("\nSuccess!\n");
    fflush(stdout);
    
    return 0;
}
