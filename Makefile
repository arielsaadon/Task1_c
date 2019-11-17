CC = gcc
AR = ar rcs
CFLAGS = -Wall -c
DEPS = myMath.h
OBJ = basicMath.o power.o

.PHONY : all clean

all : mymath mymatd maind mains

mymath : $(OBJ)
	$(AR) libmyMath.a $(OBJ)

mymatd : $(OBJ)
	$(CC) -shared -o libmyMath.so -fPIC $(OBJ)

mains :	main.o mymath
	$(CC) -o $@ main.o -I. -L. ./libmyMath.a

maind : main.o mymatd
	$(CC) -o $@ main.o -I. -L. ./libmyMath.so

main.o : main.c $(DEPS)
	$(CC) $(CFLAGS) main.c

basicMath.o : basicMath.c $(DEPS)
	$(CC) $(CFLAGS) basicMath.c

power.o : power.c $(DEPS)
	$(CC) $(CFLAGS) power.c

clean :
	rm -f *.o *.a *.so mains maind
