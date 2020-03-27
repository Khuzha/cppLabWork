RESULT = main
SRCS = main.cpp calc.cpp

all:
	g++ $(SRCS) -o $(RESULT)

clean:
	rm -rf $(RESULT)