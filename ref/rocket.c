#include "rocket.h"

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

struct rocket *create_rocket(int expected_count)
{
    struct rocket *rocket = calloc(1, sizeof(struct rocket));
    if (!rocket)
    {
        return NULL;
    }

    // Already initialized by calloc
    rocket->astronaut_count = 0;
    
    rocket->capacity = expected_count;
    
    rocket->astronauts = calloc(expected_count, sizeof(struct astronaut*));
    if (!rocket->astronauts)
    {
        free(rocket);
        return NULL;
    }

    return rocket;
}

int insert_astronaut(struct rocket *rocket, struct astronaut *astronaut)
{
    if (!rocket || !astronaut || rocket->astronaut_count == rocket->capacity)
    {
        return 0;
    }

    rocket->astronauts[rocket->astronaut_count] = astronaut;
    rocket->astronaut_count++;

    return 1;
}

int swap_seats(struct rocket *rocket, char *first_name, char *second_name)
{
    ssize_t first = -1;
    ssize_t second = -1;
    
    for (size_t i = 0; i < rocket->astronaut_count; i++)
    {
        struct astronaut *current = rocket->astronauts[i];
        if (!strcmp(current->name, first_name))
        {
            first = i;
        }
        else if (!strcmp(current->name, second_name))
        {
            second = i;
        }
    }

    if (first != -1 && second != -1)
    {
        struct astronaut *tmp = rocket->astronauts[first];
        rocket->astronauts[first] = rocket->astronauts[second];
        rocket->astronauts[second] = tmp;

        return 1;
    }

    return 0;
}

void free_rocket(struct rocket *rocket)
{
    for (size_t i = 0; i < rocket->astronaut_count; i++)
    {
        fire_astronaut(rocket->astronauts[i]);
    }
    free(rocket->astronauts);
    free(rocket);
}
