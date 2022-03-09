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
Shop.o: Shop.cpp
	g++ -c Shop.cpp
$(FILENAME): main.o Pet.o Shop.o
	g++ main.o Pet.o Shop.o -o $(FILENAME) -lm
