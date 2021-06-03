
SRC = test_complex.c complex.c unity/unity.c 
INC = complex.h
DIR = unity

target :  $(SRC)
	gcc $(SRC) -o a.out -I $(DIR)

run : target
	./a.out

clean : 
	rm a.out