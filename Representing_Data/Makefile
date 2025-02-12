all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c

util.o: util.c util.h
	gcc -c util.c

safeadd.exe: safeadd.c safeint.o util.o
	gcc safeadd.c safeint.o util.o -o safeadd.exe

safesubtract.exe: safesubtract.c safeint.o util.o
	gcc safesubtract.c safeint.o util.o -o safesubtract.exe

safemultiply.exe: safemultiply.c safeint.o util.o
	gcc safemultiply.c safeint.o util.o -o safemultiply.exe

safedivide.exe: safedivide.c safeint.o util.o
	gcc safedivide.c safeint.o util.o -o safedivide.exe

clean:
	del *.o *.exe
