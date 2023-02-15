LIB=mylib.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror -I.
DEPS = memstrprint.h
OBJ = mem.o str.o printf.o
TEST = test.c
TEST_BIN = test 

$(LIB): $(OBJ)
	@ar rc $@ $^
	ranlib $(LIB)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(LIB)
	gcc -I . $(TEST) $(LIB) -o $(TEST_BIN)
	./$(TEST_BIN)

.PHONY: clean fclean
clean:
	rm -f *.o
fclean: clean
	rm -f $(LIB) $(TEST_BIN)
