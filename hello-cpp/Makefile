# @author	:  Rajan Khullar
# @created	:  03/18/16
# @updated	:  03/19/16

CC      = g++
CFLAGS  = -std=c++11 -Wall

SOURCES	= target.cc
OBJECTS = target.o
EXEC    = target

PARAMS	= "hello world" 7

rebuild: clean compile

clean:
	@rm -rf $(EXEC)
	@rm -rf *.o

compile $(SOURCES):
	$(CC) $(CFLAGS) -c target.cc
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

test: rebuild
	@./$(EXEC) $(PARAMS)
