CC=cc
CFLAGS=
LDFLAGS=

default: build

build:
	-@$(CC) $(CFLAGS) test.c $(LDFLAGS)
	-@$(MAKE) -s clean >/dev/null 2>/dev/null

clean:
	-@rm -f *.o *.out
