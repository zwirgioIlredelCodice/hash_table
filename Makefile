test: test.c ht.c
	gcc -O test.c ht.c -o test

run:
	./test

clean:
	rm test