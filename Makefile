CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

euler10.o: euler10.cpp
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f *.o
