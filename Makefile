## VARIABLES ##

CC ?= gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99 -g

OBJS = astronaut.o rocket.o launch.o mission.o
BIN = nasa_turbo_moon_mission


## RULES ##

all: ${BIN}

${BIN}: ${OBJS}
	${CC} ${CFLAGS} -o $@ $^

clean:
	${RM} ${OBJS} ${BIN}


.PHONY: all clean
