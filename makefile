.PHONY: all clean run
FILENAME = main
all: $(FILENAME)
clean:
	rm $(FILENAME) *.o
run: $(FILENAME)
	./$(FILENAME)
main.o: main.cpp
	g++ -c main.cpp
Pet.o: Pet.cpp
	g++ -c Pet.cpp
$(FILENAME): main.o Pet.o
	g++ main.o Pet.o -o $(FILENAME) -lm
