CC:=/usr/bin/gcc
CFLAGS:=-O2 -fmessage-length=0 -pedantic-errors -std=c99 -Werror -Wall -Wextra -Wwrite-strings -Winit-self -Wcast-align -Wcast-qual -Wpointer-arith -Wstrict-aliasing -Wformat=2 -Wmissing-include-dirs -Wno-unused-parameter -Wshadow -Wuninitialized -Wold-style-definition -c
OBJECTS:=assign1.o main.o

all: main
main: $(OBJECTS)
	$(CC) -o main $(OBJECTS)
#all: assign1
#assign1: $(OBJECTS)
#	$(CC) -o assign1 $(OBJECTS)

assign1.o: assign1.h assign1.c
	$(CC) $(CFLAGS)  assign1.c

main.o: main.c assign1.h
	$(CC) $(CFLAGS) main.c
	
clean:
	rm -f assign1 $(OBJECTS)
