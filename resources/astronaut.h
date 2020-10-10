#ifndef ASTRONAUT_H
#define ASTRONAUT_H

struct astronaut {
    int id;
    char *name;
};

/* Functions */

/**
 * Create a new astronaut with the given parameters
**/
struct astronaut *hire_astronaut(int id, char *name);

/**
 * Free the given astronaut
**/
void fire_astronaut(struct astronaut *astronaut);

#endif /* ASTRONAUT_H */
