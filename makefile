test: signal.c
	gcc signal.c -o tester

run: tester
	./tester

clean:
	rm tester
	rm *~
	rm *.o
