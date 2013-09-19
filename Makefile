all:
	dotc pre test.cc > pre.cc
	clang++ pre.cc -o test

test:
	dotc pre test.cc > pre.cc
	clang++ pre.cc -o test
	./test

clean:
	rm test
	rm pre.cc