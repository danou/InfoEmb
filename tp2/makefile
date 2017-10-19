CC = gcc
CFLAGS = -Wall -Wpointer-arith -O3
PRGS = colimacon_test

.PHONY: clean mrproper
.SUFFIXES: .c .o



all:\
	$(PRGS)

colimacon_test:\
	colimacon_test.o colimacon.o
	$(CC) colimacon_test.o colimacon.o -o $@

colimacon_so:\
	colimacon.o
	$(CC) -o libcoli.so -shared colimacon.o

colimacon_a:\
	colimacon.o
	ar -cvq libcoli.a colimacon.o

.c.o: \
	$*.h $*.c
	@echo $*
	$(CC) $(CFLAGS) -c $< 

clean:
	find . -name '*.o' -exec rm -f {} ';'
	find . -name '*~'  -exec rm -f {} ';'
	find . -name '#*#' -exec rm -f {} ';'
	find . -name '.#*' -exec rm -f {} ';'
	find . -name 'core'   -exec rm -f {} ';'
	find . -name '*.core' -exec rm -f {} ';'

mrproper: clean
	-rm -rf $(EXEC)