# make file
EXE = Arranging #makes any nnamed executabel
OBJS = Arranging.o Functions.o

$(EXE): $(OBJS) Functions.h
	clang++ $(OBJS) -o $(EXE)
	
run: $(EXE)
	./$(EXE)