# Presentation

This project is a simple exercise to train pointers and dynamic memory in C.
The goal is to have it done to a group of students in a live-coding session.

I wanted to keep the exercise and implementatin as simple as I could as this
exercise is meant to be done with beginners.


# Architecture

File tree:

```sh
.
├── README.md
├── ref
│   ├── astronaut.c
│   ├── astronaut.h
│   ├── launch.c
│   ├── launch.h
│   ├── Makefile
│   ├── mission.c
│   ├── mission.h
│   ├── README.md
│   ├── rocket.c
│   └── rocket.h
└── resources
    ├── astronaut.c
    ├── astronaut.h
    ├── launch.c
    ├── launch.h
    ├── Makefile
    ├── mission.c
    ├── mission.h
    ├── README.md
    ├── rocket.c
    └── rocket.h

```

## Directories

### Reference

The `ref` folder contains an implementation lacking some error handling
as it is not the point of this exercise.

### Resources

The `resources` folder contains empty files ready to be used.
All functions' bodies are filled with a `//FIXME: not implemented` and
some code to ensure the code still compiles without errors.

I could have used `__attribute__((unused))` to avoid unused parameter
warnings however I chose not to in order to avoid confusion.


## Files

- Makefile: a really basic Makefile, the objective is to present rules and
  variables in a simple way.

- README.md: a short introduction that provides context and can be used as
  an icebreaker.

- launch.c: this file acts as a short test program. It contains several
  messages that will be displayed and ensures basic assertions (the rocket
  is not null and contains 3 astronauts and swap\_seats works).

- mission.c: contains the main function and a lot of `// FIXME`.

- rocket.c: rocket related functions.

- astronaut.c: astronaut related functions.
