CC=afl-gcc
DEPS=main.c fuzzgoat.c
ASAN=-fsanitize=address
CFLAGS=-I.
LIBS=-lm

all: $(DEPS)
	$(CC) -o Fuzzing $(CFLAGS) $^ $(LIBS)
	$(CC) $(ASAN) -o Fuzzing_ASAN $(CFLAGS) $^ $(LIBS)

afl: Fuzzing
	afl-fuzz -i in -o out ./Fuzzing @@

.PHONY: clean

clean:
	rm ./Fuzzing ./Fuzzing_ASAN