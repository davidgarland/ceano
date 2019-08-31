CC=tcc
CFLAGS=
LDFLAGS=

default: see

see:
	$(CC) -E test.c

build:
	$(CC) test.c

clean:
	-@rm -f *.o *.out *.a
