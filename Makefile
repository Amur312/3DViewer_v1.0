CC = gcc
CFLAGS = -Iinclude
DEPS = parser.h transformations.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

model_loader:  parser.o transformations.o
	$(CC) -o model_loader  parser.o transformations.o

clean:
	rm -f src/*.o model_loader
