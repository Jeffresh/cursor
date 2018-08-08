CXX = clang++
OBJS = Cursor.o


cursor: $(OBJS)
	$(CXX) $(OBJS) -o Cursor
