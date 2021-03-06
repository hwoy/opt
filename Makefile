cc = $(CC)
bin = opt
CFLAGS =  -O2  -ansi -Wpedantic -Wall -Wextra -Werror

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

