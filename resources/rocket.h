#ifndef ROCKET_H
#define ROCKET_H

#include "astronaut.h"
#include <stddef.h>

struct rocket {
    struct astronaut **astronauts;
    size_t astronaut_count;
    size_t capacity;
};

/**
 * Create a new rocket with `expected_count` astronaut seats.
**/
struct rocket *create_rocket(int expected_count);

/**
 * Insert an astronaut into the given rocket.
 *
 * In case of success, return 1. Return 0 otherwise;
**/
int insert_astronaut(struct rocket *rocket, struct astronaut *astronaut);

/**
 * Swap two astronauts positions in the rocket's `astronauts` array.
 *
 * In case of success, return 1. Return 0 otherwise;
**/
int swap_seats(struct rocket *rocket, char *first_name, char *second_name);

/**
 * Free the given rocket;
**/
void free_rocket(struct rocket *rocket);

#endif /* ROCKET_H */
