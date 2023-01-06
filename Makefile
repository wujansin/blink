CC = gcc
INCLUDE = ./
LIB = wiringPi
CFLAG = -Wall
SRC = blink.c
EXEC_FILE = blink

all:
	$(CC) -o $(EXEC_FILE) $(CFLAG) $(SRC) -l$(LIB)

clean:
	rm -f *.o $(EXEC_FILE)
