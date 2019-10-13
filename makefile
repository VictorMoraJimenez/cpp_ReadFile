
CFLAGS = -c
# list of files to be compiled
SOURCES =  main.cpp
FILES = $(SOURCES:.cpp=.o)

PROGRAM = cpp_readfile.out

all: $(FILES) $(PROGRAM)

$(PROGRAM) : $(FILES)
		$(CXX) $(FILES) -o $@  

.cpp.o: *.h
	$(CXX) $(CFLAGS) $< -o $@

clean :
	-rm -f $(FILES) $(PROGRAM)

