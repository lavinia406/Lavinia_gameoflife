CC = gcc
CFLAGS = -Wall -Wextra -O2
vet:
	$(CC) -Wall -Wextra -pedantic -o output tema1PA.c

EXEC = program
lint:
	clang-format -i $(SRC)
SRC = tema1PA.c
OBJ = $(SRC:.c=.o)


all: $(EXEC)


$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


run: $(EXEC)
	for file in data*.in; do ./$(EXEC) $$file $${file%.in}.out; done


