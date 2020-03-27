RESULT = main
SRCS = main.cpp calc.cpp
OBJS = main.o calc.o

all:
	g++ -c $(SRCS)
	g++ $(OBJS) -o main

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf  main

re: fclean all