CC=gcc
FLAGS= -Wall
DEPS = node.h linked_list.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(FLAGS)

node:
	$(CC) $(FLAGS) -c node.c -o node.out

linked_list: node
	$(CC) $(FLAGS) -c linked_list.c -o linked_list.out

main: linked_list
	$(CC) $(FLAGS) node.out linked_list.out main.c -o main.out

run: main
	./main.out

clean:
	rm *.out