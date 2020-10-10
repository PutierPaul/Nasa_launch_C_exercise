#ifndef ROCKET_H
#define ROCKET_H

#include "astronaut.h"
#include <stddef.h>

struct rocket {
    struct astronaut **astronauts;
    size_t astronaut_count;
    size_t capacity;
};

/* Functions */
struct rocket *create_rocket(int expected_count);
int insert_astronaut(struct rocket *rocket, struct astronaut *astronaut);
int swap_seats(struct rocket *rocket, char *first_name, char *second_name);
void free_rocket(struct rocket *rocket);

#endif /* ROCKET_H */
