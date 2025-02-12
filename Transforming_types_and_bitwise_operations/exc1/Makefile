all: main.exe

main.exe: main.o quadraticroots.o
	gcc main.o quadraticroots.o -lm -o main.exe

main.o: main.c quadraticroots.h
	gcc -c main.c -o main.o

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	del *.o *.exe
