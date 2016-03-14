# @author:  Rajan Khullar
# @created: 03/13/16
# @updated: 03/13/16

CC      = gcc
CFLAGS  = -g -Wall
SOURCE	= target.c
EXEC    = target

rebuild: clean compile

clean:
	@rm -rf $(EXEC)
	@rm -rf *.o
	@rm -rf *.gch

compile $(SOURCES):
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXEC)

test: rebuild
	@$(EXEC)
