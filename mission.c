#include "mission.h"
#include <stdio.h>

int main(void) 
{
    /** Chargement des astronautes **/

    struct rocket *rocket = create_rocket(3);
    if (!rocket)
    {
        return 1;
    }

    char *names[3] = {"Charles", "Steve", "Jack"};

    for (size_t i = 0; i < 3; i++)
    {
        struct astronaut *a = hire_astronaut(i, names[i]);
        if (!insert_astronaut(rocket, a))
        {
            return 1;
        }
    }

    /** Lancement de la mission **/

    launch_mission(rocket);

    swap_seats(rocket, "Steve", "Jack");


    /** Retour de la mission **/

    free_rocket(rocket);

    /** Fin des opérations **/
    return 0;
}
