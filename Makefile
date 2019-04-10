CC=cc
CFLAGS=
LDFLAGS=

default: build

build:
	-@$(CC) $(CFLAGS) test.c $(LDFLAGS)

clean:
	-@rm -f *.o *.out
