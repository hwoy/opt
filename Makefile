cc = gcc
bin = opt
CFLAGS =    -ansi -Wpedantic -Wall -Werror

.PHONY: all clean

all:	$(bin)

$(bin):	main.o opt.o
	$(cc) -o $(bin) main.o opt.o
main.o:
	$(cc) -c -o main.o $(CFLAGS) main.c
opt.o:
	$(cc) -c -o opt.o $(CFLAGS) opt.c
clean:
	rm -rf main.o opt.o $(bin) *~

