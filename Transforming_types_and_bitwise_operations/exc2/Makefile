all: main.exe

main.exe: main.o lights.o
	gcc main.o lights.o -o main.exe

main.o: main.c lights.h
	gcc -c main.c -o main.o

lights.o: lights.c lights.h
	gcc -c lights.c -o lights.o

clean:
	del *.o *.exe
