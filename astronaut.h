#ifndef ASTRONAUT_H
#define ASTRONAUT_H

struct astronaut {
    int id;
    char *name;
};

/* Functions */

struct astronaut *hire_astronaut(int id, char *name);
void fire_astronaut(struct astronaut *astronaut);

#endif /* ASTRONAUT_H */
