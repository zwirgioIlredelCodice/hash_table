test: test.o ht.o
	gcc -O test.o ht.o -o test

test.o: test.c
	gcc -c -O test.c -o test.o

ht.o: ht.c ht.h
	gcc -c -O ht.c -o ht.o

run:
	./test

clean:
	rm test *o test.exe