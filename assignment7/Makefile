CC=gcc
CFLAGS=-std=gnu99

all: double_invert recursive_selection

double_invert: FORCE
	rm -rf *~ double_invert
	$(CC) -o double_invert double_invert.c double_invert_main.obj $(CFLAGS)

recursive_selection: FORCE
	rm -rf *~ recursive_selection
	$(CC) -o recursive_selection recursive_selection.c recursive_selection_main.obj $(CFLAGS)

clean:
	rm -rf *~ double_invert recursive_selection

FORCE: