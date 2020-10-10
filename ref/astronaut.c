#include "astronaut.h"

#include <stdlib.h>

struct astronaut *hire_astronaut(int id, char *name)
{
    struct astronaut *astronaut = calloc(1, sizeof(struct astronaut));
    if (!astronaut)
    {
        return NULL;
    }

    astronaut->id = id;
    astronaut->name = name;

    return astronaut;
}

void fire_astronaut(struct astronaut *astronaut)
{
    free(astronaut);
}
