CXX = clang++
OBJS = Cursor.o test.o

all: main

main: $(OBJS) 
	$(CXX) $(OBJS)  -o Cursor

clean:
	-rm -f *.o core *.core