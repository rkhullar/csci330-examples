# @author	:  Rajan Khullar
# @created	:  03/14/16
# @updated	:  03/14/16

CC      = gcc
CFLAGS  = -g -Wall -std=c11
SOURCES	= target.c
OBJECTS = target.o
EXEC    = target

rebuild: clean compile

clean:
	@rm -rf $(EXEC)
	@rm -rf *.o
	@rm -rf *.gch

compile $(SOURCES):
	$(CC) $(CFLAGS) -c target.c
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

test: rebuild
	@./$(EXEC) "hello world" 7
