clean:
	rm bin/*

fatread:
	clang -o bin/fatread tests/fatread.c

builddisk:
	tests/buildfat.sh
	
tests: fatread builddisk