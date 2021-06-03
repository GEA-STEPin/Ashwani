

SRC = test_stack.c stack.c unity/unity.c 
INC = stack.h
DIR = unity

target :  $(SRC)
	gcc $(SRC) -o a.out -I $(DIR)

run : target
	./a.out

clean : 
	rm a.out