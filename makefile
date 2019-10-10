CC = g++
CFLAGS = -c
SOURCES =  main.cpp
FILES = $(SOURCES:.cpp=.o)
PROGRAM = cpp_readfile.out

all: $(FILES) $(PROGRAM)

$(PROGRAM) : $(FILES)
		$(CC) $(FILES) -o $@  

.cpp.o: *.h
	$(CC) $(CFLAGS) $< -o $@

clean :
	-rm -f $(FILES) $(PROGRAM)

